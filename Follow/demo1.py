import cv2

# Khởi tạo bộ theo dõi Haar Cascade
face_cascade = cv2.CascadeClassifier("haarcascade_frontalface_default.xml")

# Khởi tạo bộ theo dõi HOG
hog = cv2.HOGDescriptor()

# Mở kết nối đến camera RTSP
cap = cv2.VideoCapture("rtsp://admin:123456@172.16.3.152:554/stream")

# Kiểm tra kết nối
if not cap.isOpened():
    print("Không thể mở kết nối đến camera RTSP")
    exit()

# Lặp qua các khung hình
while True:
    # Đọc khung hình từ camera RTSP
    ret, frame = cap.read()

    # Phát hiện các đối tượng trong khung hình
    faces = face_cascade.detectMultiScale(frame, scaleFactor=1.1, minNeighbors=5)
    bodies = hog.detectMultiScale(frame, winStride=(8, 8), padding=(8, 8), scale=1.05, hitThreshold=0.9, groupThreshold=5)




    # Nếu phát hiện thấy đối tượng mới
    #if len(faces) == 4 and len(bodies) == 4:
    try:
        for (x, y, w, h) in faces + bodies:
            # Tạo ID cho đối tượng mới
            id = len(faces + bodies)

            # Hiển thị hình ảnh
            cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)

            # Hiển thị ID
            cv2.putText(frame, str(id), (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
    except Exception as e:
        pass
    # Hiển thị khung hình
    cv2.imshow("Frame", frame)

    # Chạm phím Esc để thoát
    k = cv2.waitKey(1) & 0xFF
    if k == 27:
        break
