import subprocess
import os
import sys
import socket
import time

def receive_file(server_socket):
    file_name = server_socket.recv(1024).decode()
    desktop_path = os.path.join(os.path.expanduser("~"), "Desktop")
    file_path = os.path.join(desktop_path, file_name)
    if os.path.exists(file_path):
        return
    with open(file_path, 'wb') as file:
        while True:
            data = server_socket.recv(1024)
            if not data:                
                break
            file.write(data)
        file.close()
    # Import win10toast and show notification here
    #toast = win10toast.ToastNotifier()
    #toast.show_toast("Thông Báo", "Đã tải thành công!", threaded=True)

def main():
    while True:
        try:
            client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_address = ('localhost', 80)
            client_socket.connect(server_address)
            receive_file(client_socket)
            client_socket.close()
        except:
            time.sleep(3)

if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "--run-hidden":
        try:
            CREATE_NO_WINDOW = 0x08000000
            subprocess.Popen([sys.executable, __file__], creationflags=CREATE_NO_WINDOW)
        except Exception as e:
            print(f"Error starting hidden process: {e}")
    else:
        main()
