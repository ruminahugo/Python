import tkinter as tk
from tkinter import Toplevel, scrolledtext, ttk
from PIL import Image, ImageTk, ImageGrab
import cv2
import os
import pytesseract
import pyperclip
import sqlite3
import base64


class ScanImage(tk.Frame):

    def __init__(self, master):
        self.master = master
        super().__init__(self.master, relief="raised", borderwidth=1)
        self.pack(expand=True, fill="both")

        menubar = tk.Menu(self.master)

        filemenu = tk.Menu(menubar, tearoff=0)
        icon_menu = Image.open("bin/img/history.png")
        resized_image = icon_menu.resize((10, 10), Image.LANCZOS) 
        self.photo_history = ImageTk.PhotoImage(resized_image)
        filemenu.add_command(label="Lịch Sử", compound="left", image=self.photo_history, command=self.get_history)
        icon_menu = Image.open("bin/img/exit.png")
        resized_image = icon_menu.resize((10, 10), Image.LANCZOS) 
        self.photo_exit = ImageTk.PhotoImage(resized_image)
        filemenu.add_command(label="Thoát", compound="left", image=self.photo_exit, command=self.close)

        menubar.add_cascade(label="Menu", menu=filemenu)

        self.master.config(menu=menubar)

        self.canvas = tk.Canvas(self)
        self.canvas.pack(side=tk.LEFT,expand=True,fill="both")
        self.add_text_to_canvas("Bấm Ctrl + V để dán ảnh vào!", 80, 400)

        self.vbar=tk.Scrollbar(self,orient=tk.VERTICAL)
        self.vbar.pack(side=tk.RIGHT,fill=tk.Y)
        self.vbar.config(command=self.canvas.yview)

        self.canvas.config(yscrollcommand=self.vbar.set)

        self.master.bind_all("<Control-v>", lambda event: self.paste_image(event))
        self.master.state("zoomed")
        self.master.protocol("WM_DELETE_WINDOW", self.close)

        self.master.iconphoto(True, self.read_img("bin/img/icon.ico"))

    def read_img(self, url):
        image = Image.open(url)
        photo = ImageTk.PhotoImage(image)
        return photo
    
    def close(self):
        self.master.destroy()

    def decode_base64_to_string(self, encoded_string):
        decoded_bytes = base64.b64decode(encoded_string)
        decoded_string = decoded_bytes.decode('utf-8')
        return decoded_string

    def get_history(self):
        def close():
            dialog.grab_release()
            dialog.destroy()
            
        dialog = Toplevel(self)
        
        listbox = tk.Listbox(dialog)
        listbox.pack(side="left", expand=True, fill="both")

        yscrollbar = ttk.Scrollbar(listbox, orient="vertical", command=listbox.yview)
        yscrollbar.pack(side="right", fill="y")
        xscrollbar = ttk.Scrollbar(listbox, orient="horizontal", command=listbox.xview)
        xscrollbar.pack(side="bottom", fill="x")
        listbox.configure(yscrollcommand=yscrollbar.set, xscrollcommand=xscrollbar.set)

        dialog.grab_set()
        dialog.state("zoomed")
        dialog.protocol("WM_DELETE_WINDOW", close)

        
        try:
            conn = sqlite3.connect("data/database.db")
            cursor = conn.cursor()
            cursor.execute("SELECT * FROM history ORDER BY id DESC;")
            results = cursor.fetchall()
            for row in results:
                listbox.insert(tk.END, row[0], '\t', self.decode_base64_to_string(row[1]))
            conn.close()
        except Exception(e):
            print(e)


    def add_text_to_canvas(self, text, x, y, font=("Helvetica", 63)):
        self.canvas.create_text(x, y, text=text, font=font, anchor="nw")
        
    def paste_image(self, event):
        try:
            image = ImageGrab.grabclipboard()
            if image:
                self.canvas.delete("all")
                # Resize the image
                _width = image.width
                _height = image.height
                if _width < 857:
                    new_width = 857
                    aspect_ratio = _width / _height
                    new_height = int(new_width / aspect_ratio)
                    resized_image = image.resize((new_width, new_height))
                    self.canvas.image = ImageTk.PhotoImage(resized_image)
                    self.canvas.create_image(0, 0, anchor=tk.NW, image=self.canvas.image)
                    self.canvas.config(width=new_width, height=new_height)
                    resized_image.save("output.png")
                else:
                    self.canvas.image = ImageTk.PhotoImage(image)
                    self.canvas.create_image(0, 0, anchor=tk.NW, image=self.canvas.image)
                    self.canvas.config(width=_width, height=_height)
                    image.save("output.png")
                    
                self.analyze()
                os.remove("output.png")
        except Exception as e:
            self.master.destroy()

    def encode_string_to_base64(self, original_string):
        encoded_bytes = original_string.encode('utf-8')
        encoded_string = base64.b64encode(encoded_bytes).decode('utf-8')
        return encoded_string

    def insert(self, history):
        history = self.encode_string_to_base64(history)
        conn = sqlite3.connect("data/database.db")
        cursor = conn.cursor()
        cursor.execute(f"""
        INSERT INTO history (history)
            VALUES('{history}');
        """)
        conn.commit()
        conn.close()

    def analyze(self):
        image = cv2.imread('output.png')
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        gray = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)[1]
         
        filename = "{}.png".format(os.getpid())
        cv2.imwrite(filename, gray)

        pytesseract.pytesseract.tesseract_cmd = r"C:\Program Files\Tesseract-OCR\tesseract.exe"
        text = pytesseract.image_to_string(Image.open(filename),lang='eng' and 'vie')
        
        os.remove(filename)
        self.insert(text)
        Dialog(self, text)
        

class Dialog(Toplevel):
    def __init__(self, parent, text):
        self.parent = parent
        super().__init__(self.parent)
        self.title("Sao Chép Văn Bản")
        
        popup_width = 650
        popup_height = 360

        # Lấy kích thước của màn hình
        screen_width = root.winfo_screenwidth()
        screen_height = root.winfo_screenheight()

        # Tính toán vị trí để cửa sổ con hiển thị ngay giữa cửa sổ chính
        x_position = (screen_width - popup_width) // 2
        y_position = (screen_height - popup_height) // 2

        # Đặt vị trí của cửa sổ con
        self.geometry(f"{popup_width}x{popup_height}+{x_position}+{y_position}")        
        self.parent.grab_set()

        frame = tk.Frame(self)
        frame.pack(expand=True, fill="both", side=tk.TOP)

        self.text_widget = scrolledtext.ScrolledText(frame, wrap=tk.WORD, width=1, height=1)
        self.text_widget.pack(expand=True, fill="both")

        # Thêm văn bản vào widget Text
        self.text_widget.insert(tk.END, text)

        self.close_button = tk.Button(frame, text="Copy", command=self.copy_to_clipboard)
        self.close_button.pack(side=tk.LEFT, padx=(280, 14), pady=10)

        close_button = tk.Button(frame, text="Đóng", command=self.close_dialog)
        close_button.pack(side=tk.LEFT, pady=10)

        self.protocol("WM_DELETE_WINDOW", self.close_dialog)

    def close_dialog(self):
        self.destroy()
        self.parent.grab_release()

    def copy_to_clipboard(self):
        text_content = self.text_widget.get("1.0", tk.END)  # Lấy nội dung từ ScrolledText
        pyperclip.copy(text_content)
        self.close_button.configure(text="Copyed")

    
if __name__ == "__main__":
    # Tạo cửa sổ giao diện
    root = tk.Tk()
    root.withdraw()
    root.title("Tách Văn Bản")
    ScanImage(root)
    root.mainloop()
    
