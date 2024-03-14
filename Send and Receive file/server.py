import socket
import threading
import os

sent = []
dic = {'BLIEU': '14.224.169.51', 'BHOA': '14.224.161.21', 'DNANG':'113.176.100.217', 'Toi': '127.0.0.1'}

def get_key_by_value(dictionary, search_value):
    for key, value in dictionary.items():
        if value == search_value:
            return key
    return None

def send_file(client_socket, client_address):
    folder = "D:/Python/Send and Receive file/Files"  # Đường dẫn đến thư mục chứa file
    if not os.path.exists(folder):
        print(f"Folder '{folder}' không tồn tại.")
        return

    files = os.listdir(folder)
    if not files:
        print(f"Không có file trong thư mục '{folder}'.")
        return

    filename = files[0]
    client_socket.sendall(filename.encode())
    file_path = os.path.join(folder, filename)
    try:
        with open(file_path, 'rb') as file:
            while True:
                data = file.read(1024)
                if not data:
                    break
                client_socket.sendall(data)
        client = get_key_by_value(dic, client_address[0]) if get_key_by_value(dic, client_address[0]) is not None else client_address[0]
        print(f"Đã gửi file '{filename}' tới {client}")
        sent.append(client_address[0])
    except Exception as e:
        print(f"Lỗi khi gửi file '{filename}': {e}")
    finally:
        client_socket.close()  # Đóng kết nối với client sau khi hoàn tất gửi file

def handle_client(client_socket, client_address):
    if (client_address[0] not in sent):
        name = client_socket.recv(1024).decode('utf-8')
        ip = client_address[0] if client_address[0] is not None else 'undefined!'
        print(f"Kết nối từ {name} đã được thiết lập.")     
        send_file(client_socket, client_address)

def main():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_address = ('localhost', 80)
    server_socket.bind(server_address)
    server_socket.listen(5)
    print("Server đang chờ kết nối...")

    while True:
        client_socket, client_address = server_socket.accept()
        client_thread = threading.Thread(target=handle_client, args=(client_socket, client_address))
        client_thread.start()

if __name__ == "__main__":
    main()
