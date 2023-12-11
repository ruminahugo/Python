import digitalpersona

# Tạo đối tượng DPFPReader và chỉ định thiết bị quét vân tay
reader = digitalpersona.DPFPReader()
reader.Open("USB:0000:0000:0000:0000:0000:0000:0000:0000")

# Lấy mẫu vân tay
image = reader.GetImage()

# Lưu hình ảnh vân tay
image.Save("fingerprint.png")

# Đóng thiết bị quét vân tay
reader.Close()
