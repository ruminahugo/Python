import time

def progress_bar(total):
    for i in range(total + 1):
        progress = (i / total) * 100
        print(f"Progress: {progress:.2f}%", end='\r')
        time.sleep(0.1)  # Giả định thời gian xử lý mỗi bước là 0.1 giây
    print("\nComplete!")

# Gọi hàm progress_bar với số lượng bước (ví dụ: 50 bước)
progress_bar(50)
