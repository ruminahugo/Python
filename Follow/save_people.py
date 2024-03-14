import cv2
import face_recognition
import xml.etree.ElementTree as ET
import numpy as np

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
        'encoding': obj.findtext('encoding', default='')  # Sử dụng findtext để tránh lỗi khi không tìm thấy 'encoding'
    }
    objects_data.append(obj_data)
    if obj_data['encoding']:  # Nếu có mã hoá khuôn mặt đã biết trước
        known_encodings.append(bytes.fromhex(obj_data['encoding']))

# Khởi tạo video capture từ nguồn RTSP
video_capture = cv2.VideoCapture('rtsp://admin:123456@172.16.3.152:554/stream')


while True:
    ret, frame = video_capture.read()
    if not ret:
        break

    # Chuyển đổi từ RGB sang grayscale để sử dụng với face_recognition
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)

    # Create a list to track whether each face is already known
    face_known = [False] * len(face_locations)

    for i, face_encoding in enumerate(face_encodings):
        matched_id = None

        # Convert known_encodings to strings for comparison
        known_encodings_strings = [encoding for encoding in known_encodings]

        # Check if the current face_encoding matches any known encoding
        matches = [bytes(face_encoding).hex() == encoding for encoding in known_encodings_strings]

        # If there is no match, save the new face
        if True not in matches:
            face_known[i] = True  # Mark the current face as known
            # Thêm thông tin về người mới vào file XML
            new_face_encoding = bytes(face_encoding).hex()
            new_object = ET.Element('object')
            new_object.set('id', str(len(objects_data) + 1))
            new_object.set('type', 'face')  # Thay đổi loại đối tượng tùy thuộc vào nhu cầu
            new_object_encoding = ET.SubElement(new_object, 'encoding')
            new_object_encoding.text = new_face_encoding
            root.append(new_object)
            tree.write('objects_data.xml')
            print("Đã lưu thông tin người mới!")

    # Hiển thị ID của các đối tượng từ file XML
    for obj, is_known in zip(objects_data, face_known):
        if is_known:
            continue  # Skip known faces to avoid duplication in display
        # Cập nhật tọa độ dựa trên vị trí thực tế của đối tượng trong frame hiện tại
        obj_x, obj_y, obj_w, obj_h = obj['x'], obj['y'], obj['w'], obj['h']
        cv2.rectangle(frame, (obj_x, obj_y), (obj_x + obj_w, obj_y + obj_h), (0, 255, 0), 2)
        cv2.putText(frame, f"ID: {obj['id']}", (obj_x, obj_y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    # Hiển thị video với ID của các đối tượng di chuyển
    cv2.imshow('Object ID Tracking via RTSP', frame)

    # Nhấn 'q' để thoát
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Giải phóng tài nguyên và đóng cửa sổ video
video_capture.release()
cv2.destroyAllWindows()
