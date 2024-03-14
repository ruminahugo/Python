import tkinter as tk
from tkinter import ttk
from tkinter import filedialog
import socket
import threading
import sys
import os

stop_flag = False
lst_socket = {}
class ShowroomApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Quản lý Showroom")

        # Group 1: List tên showroom và checkbox
        self.showroom_group = tk.LabelFrame(root, text="Danh sách Showroom")
        self.showroom_group.grid(row=0, column=0, padx=10, pady=10, sticky="nsew")

        self.select_all_var = tk.BooleanVar()
        self.select_all_checkbox = tk.Checkbutton(self.showroom_group, text="Chọn tất cả", variable=self.select_all_var, command=self.toggle_select_all)
        self.select_all_checkbox.grid(row=0, column=0, sticky="w", pady=2)

        # Tạo một Canvas
        self.canvas = tk.Canvas(self.showroom_group, borderwidth=0, background="#ffffff")
        self.frame = tk.Frame(self.canvas, background="#ffffff")
        self.vsb = tk.Scrollbar(self.showroom_group, orient="vertical", command=self.canvas.yview)
        self.canvas.configure(yscrollcommand=self.vsb.set)

        # Đặt frame vào canvas
        self.canvas.grid(row=1, column=0, sticky="nsew")
        self.vsb.grid(row=1, column=1, sticky="ns")
        self.canvas.create_window((4, 4), window=self.frame, anchor="nw", tags="self.frame")

        # Thiết lập sự kiện cuộn cho canvas
        self.frame.bind("<Configure>", self.on_frame_configure)
        self.canvas.bind("<Configure>", self.on_canvas_configure)

        # Kích thước mặc định cho frame
        self.frame_width = self.root.winfo_width()

        # Group 2: Thẻ nhập file
        self.file_group = tk.LabelFrame(root, text="Nhập File")
        self.file_group.grid(row=1, column=0, padx=10, pady=10, sticky="nsew")

        self.file_entry = tk.Entry(self.file_group, width=40)
        self.file_entry.grid(row=0, column=0, sticky="w", padx=5)

        self.file_path = ''

        self.browse_button = tk.Button(self.file_group, text="Chọn File", command=self.browse_file)
        self.browse_button.grid(row=0, column=1, sticky="w", padx=5)

        self.send_button = tk.Button(root, text="Gửi", command=self.send_data_to_client)
        self.send_button.grid(row=2, column=0, pady=10)

        self.showroom = []
        self.checkboxes = []

        self.root.protocol("WM_DELETE_WINDOW", self.on_closing)

    def on_frame_configure(self, event):
        # Thay đổi chiều cao của canvas khi nội dung frame thay đổi
        self.canvas.configure(scrollregion=self.canvas.bbox("all"))

    def on_canvas_configure(self, event):
        # Thay đổi chiều cao của frame khi cửa sổ thay đổi kích thước
        canvas_width = event.width
        if canvas_width != self.frame_width:
            self.frame_width = canvas_width
            self.canvas.itemconfig("self.frame", width=canvas_width)

    def find_checkbox_position(self, text_to_find):
        for widget in self.frame.grid_slaves():
            if isinstance(widget, tk.Checkbutton) and widget.cget("text") == text_to_find:
                grid_info = widget.grid_info()
                return grid_info["row"], grid_info["column"]

        # Trả về None nếu không tìm thấy
        return None
          
    def browse_file(self):
        self.file_path = filedialog.askopenfilename(filetypes=[("All files", "*.*"), ("All files", "*.*")])
        if self.file_path:
            self.file_entry.delete(0, tk.END)
            self.file_entry.insert(tk.END, self.file_path)

    def split_file(self, file_path, chunk_size=1024):
        chunks = []
        with open(file_path, 'rb') as file:
            while True:
                data_chunk = file.read(chunk_size)
                if not data_chunk:
                    break
                chunks.append(data_chunk)
        return chunks

    def send_file(self, showroom, client_socket, file_path, chunk_size=1024):
        filename = os.path.basename(file_path)
        client_socket.send(filename.encode())
        file_size = os.path.getsize(file_path)
        chunks = self.split_file(file_path, chunk_size)
        client_socket.sendall(str(file_size).encode())
        try:
            result = self.find_checkbox_position(showroom)
            if result:
                row, column = result
                progress_bar = tk.Canvas(self.frame, width=280, height=20, bg="lightgray", relief="solid", borderwidth=1)
                progress_bar.grid(row=row, column=column+1)
                progress_rect = progress_bar.create_rectangle(1, 1, 1, 18, outline="", fill="green")
                sent_data = 0
                for chunk in chunks:
                    client_socket.sendall(chunk)
                    sent_data += len(chunk)
                    percentage = (sent_data / file_size) * 100
                    fill_width = 3 * percentage
                    progress_bar.coords(progress_rect, 1, 1, fill_width, 18)
                    progress_bar.update_idletasks()      

        except Exception as e:
            print(f"Lỗi khi gửi file '{filename}': {e}")
        finally:
            if progress_bar:
                progress_bar.destroy()
            client_socket.close() 

    def send_data_to_client(self):   
        if self.file_path:  
            for sr in self.showroom: 
                for showroom, socket in lst_socket.items():
                    if sr.get() == showroom:
                        self.send_file(showroom, socket, self.file_path)
        

    def update_showroom_listbox(self, name, index_row):
        checkbox_var = tk.StringVar()
        checkbox = tk.Checkbutton(self.frame, text=name, variable=checkbox_var, onvalue=name, offvalue="", command=lambda:self.toggle_deselect_all(checkbox_var.get()))
        checkbox.grid(row=index_row, column=0, sticky="w")
        self.checkboxes.append(checkbox)
        self.showroom.append(checkbox_var)

    def toggle_select_all(self):
        select_all_state = self.select_all_var.get()
        for checkbox in self.checkboxes:
            checkbox.select() if select_all_state else checkbox.deselect()

    def toggle_deselect_all(self, status):    
        if not status:
            self.select_all_var.set(False)

    def on_closing(self):
        global stop_flag
        stop_flag = True
        self.root.destroy()

def client_listener(app, server_socket):
    try:
        i = 0
        while not stop_flag:
            client_socket, client_address = server_socket.accept()
            name = client_socket.recv(1024).decode('utf-8')
            if (name not in lst_socket):
                i += 1
                app.update_showroom_listbox(name, i)
            lst_socket[name] = client_socket
                
                
    finally:
        pass
        #server_socket.close()

def main():
    root = tk.Tk()
    app = ShowroomApp(root)

    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_address = ('localhost', 80)
    server_socket.bind(server_address)
    server_socket.listen(5)
    listener_thread = threading.Thread(target=client_listener, args=(app, server_socket))
    listener_thread.start()

    root.mainloop()

    listener_thread.join()

    sys.exit()

if __name__ == "__main__":
    main()