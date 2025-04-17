import pandas as pd

# Đọc file Excel (có thể dùng sheet_name=2 nếu là sheet thứ 3)
df = pd.read_excel('in.xlsx', sheet_name=2)

# Khởi tạo list để lưu kết quả
expanded_rows = []

# Duyệt từng dòng
for _, row in df.iterrows():
    quantity = row.iloc[5]  # Cột thứ 6 (index = 5)
    try:
        quantity = int(quantity)  # Đảm bảo là số nguyên
    except:
        quantity = 1  # Nếu lỗi thì mặc định là 1

    for _ in range(quantity):
        expanded_rows.append(row.tolist())

# Tạo DataFrame mới từ danh sách đã nhân bản
df_expanded = pd.DataFrame(expanded_rows, columns=df.columns)

# Ghi ra file mới
df_expanded.to_excel('out.xlsx', index=False)

print("✅ Đã nhân bản và lưu thành công ra file out.xlsx")
