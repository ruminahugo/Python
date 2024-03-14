import cv2
import face_recognition
import datetime

# Định nghĩa danh sách nhân viên và ID của họ
employees = {"employee1": 1, "employee2": 2}  # Thay đổi thông tin nhân viên tùy theo nhu cầu

# Định nghĩa các đường link RTSP của camera
rtsp_links = ["rtsp://username:password@ip_address/cam1", "rtsp://username:password@ip_address/cam2"]

# Load ảnh và mã ID của từng nhân viên
known_face_encodings = []
known_face_ids = []

for employee_name, employee_id in employees.items():
    image = face_recognition.load_image_file(f"{employee_name}.jpg")  # Thay đổi đường dẫn tùy theo vị trí lưu ảnh
    face_encoding = face_recognition.face_encodings(image)[0]
    known_face_encodings.append(face_encoding)
    known_face_ids.append(employee_id)

# Mở các luồng video từ các camera RTSP
cap = [cv2.VideoCapture(link) for link in rtsp_links]

# Mở file text để ghi log
log_file = open("attendance_log.txt", "a")

while True:
    for i, video_capture in enumerate(cap):
        ret, frame = video_capture.read()

        # Xử lý frame ở đây nếu cần thiết

        # Nhận diện khuôn mặt
        face_locations = face_recognition.face_locations(frame)
        face_encodings = face_recognition.face_encodings(frame, face_locations)

        for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
            matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
            name = "Unknown"

            if True in matches:
                first_match_index = matches.index(True)
                name = employees[list(employees.keys())[list(employees.values()).index(known_face_ids[first_match_index])]]

            # Kiểm tra giờ vào ra
            current_time = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
            log_entry = f"Camera {i + 1}: {name} (ID {known_face_ids[first_match_index]}) detected at {current_time}\n"
            log_file.write(log_entry)
            print(log_entry)

    # Thời gian chờ giữa các lần kiểm tra
    cv2.waitKey(1000)

# Đóng các luồng video và file log khi kết thúc chương trình
for video_capture in cap:
    video_capture.release()

log_file.close()
