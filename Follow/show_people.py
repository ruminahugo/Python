import cv2
import xml.etree.ElementTree as ET

# Đọc dữ liệu từ file objects_data.xml (nếu có)
try:
    tree = ET.parse('objects_data.xml')
    root = tree.getroot()
except FileNotFoundError:
    print("File objects_data.xml không tồn tại!")
    quit()

objects_data = []
for obj in root.findall('object'):
    obj_data = {
        'id': int(obj.get('id')),
        'type': obj.get('type'),
        'x': int(obj.get('x')),
        'y': int(obj.get('y')),
        'w': int(obj.get('w')),
        'h': int(obj.get('h')),
        'encoding': obj.findtext('encoding', default='')  # Sử dụng findtext để tránh lỗi khi không tìm thấy 'encoding'
    }
    objects_data.append(obj_data)

# Khởi tạo video capture từ nguồn RTSP
video_capture = cv2.VideoCapture('rtsp://admin:123456@172.16.3.229:554/stream')

while True:
    ret, frame = video_capture.read()
    if not ret:
        break

    # Hiển thị ID của các đối tượng từ file XML
    for obj in objects_data:
        cv2.rectangle(frame, (obj['x'], obj['y']), (obj['x'] + obj['w'], obj['y'] + obj['h']), (0, 255, 0), 2)
        cv2.putText(frame, f"ID: {obj['id']}", (obj['x'], obj['y'] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    # Hiển thị video với ID của các đối tượng di chuyển
    cv2.imshow('Object ID Tracking via RTSP', frame)

    # Nhấn 'q' để thoát
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Giải phóng tài nguyên và đóng cửa sổ video
video_capture.release()
cv2.destroyAllWindows()
