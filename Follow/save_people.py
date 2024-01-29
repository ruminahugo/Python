import cv2
import face_recognition
import xml.etree.ElementTree as ET

# Đọc dữ liệu từ file objects_data.xml (nếu có)
try:
    tree = ET.parse('objects_data.xml')
    root = tree.getroot()
except FileNotFoundError:
    root = ET.Element('objects')
    tree = ET.ElementTree(root)

objects_data = []
known_encodings = []  # Danh sách mã hoá khuôn mặt đã biết trước
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
    if obj_data['encoding']:  # Nếu có mã hoá khuôn mặt đã biết trước
        known_encodings.append(bytes.fromhex(obj_data['encoding']))

# Khởi tạo video capture từ nguồn RTSP
video_capture = cv2.VideoCapture('rtsp://admin:123456@172.16.3.229:554/stream')

while True:
    ret, frame = video_capture.read()
    if not ret:
        break

    # Chuyển đổi từ RGB sang grayscale để sử dụng với face_recognition
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)

    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        matched_id = None
        # So sánh mã hoá khuôn mặt mới với danh sách mã hoá đã biết trước
        matches = face_recognition.compare_faces(known_encodings, face_encoding)
        #if True in matches:
        #    matched_id = objects_data[matches.index(True)]['id']

        # Hiển thị ID của khuôn mặt khớp (nếu có)
        if matched_id is None:
            # Thêm thông tin về người mới vào file XML
            new_face_encoding = face_encoding.hex()
            new_object = ET.Element('object')
            new_object.set('id', str(len(objects_data) + 1))
            new_object.set('type', 'face')  # Thay đổi loại đối tượng tùy thuộc vào nhu cầu
            new_object.set('x', str(left))  # Tọa độ x của đối tượng mới
            new_object.set('y', str(top))   # Tọa độ y của đối tượng mới
            new_object.set('w', str(right - left))  # Chiều rộng của đối tượng mới
            new_object.set('h', str(bottom - top))  # Chiều cao của đối tượng mới
            new_object_encoding = ET.SubElement(new_object, 'encoding')
            new_object_encoding.text = new_face_encoding
            root.append(new_object)
            tree.write('objects_data.xml')
            print("Đã lưu thông tin người mới!")

    # Hiển thị video với ID của các đối tượng di chuyển
    cv2.imshow('Object ID Tracking via RTSP', frame)

    # Nhấn 'q' để thoát
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Giải phóng tài nguyên và đóng cửa sổ video
video_capture.release()
cv2.destroyAllWindows()
