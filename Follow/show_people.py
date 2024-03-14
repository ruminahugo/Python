import cv2
import xml.etree.ElementTree as ET
import face_recognition

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
        'x': int(obj.get('x') or 0),  # Ensure 'x' is not None
        'y': int(obj.get('y') or 0),  # Ensure 'y' is not None
        'w': int(obj.get('w') or 0),  # Ensure 'w' is not None
        'h': int(obj.get('h') or 0),  # Ensure 'h' is not None
        'encoding': obj.findtext('encoding', default='')  # Sử dụng findtext để tránh lỗi khi không tìm thấy 'encoding'
    }
    objects_data.append(obj_data)

# Khởi tạo video capture từ nguồn RTSP
video_capture = cv2.VideoCapture('rtsp://admin:123456@172.16.3.152:554/stream')

while True:
    ret, frame = video_capture.read()
    if not ret:
        break

    # Hiển thị ID của các đối tượng từ file XML
    for obj in objects_data:
        # Lấy toàn bộ khuôn mặt trong frame
        face_locations = face_recognition.face_locations(frame)

        if len(face_locations) > 0:
            # Lấy toạ độ của khuôn mặt đầu tiên
            (top, right, bottom, left) = face_locations[0]

            # Cập nhật toạ độ dựa trên vị trí thực tế của đối tượng trong frame hiện tại
            obj['x'] = left
            obj['y'] = top
            obj['w'] = right - left
            obj['h'] = bottom - top

            # Hiển thị thông tin và hộp xung quanh đối tượng trong frame
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
