# 📘 Cây BST & Chuyển đổi Biểu thức (Trung tố → Hậu tố / Tiền tố)

## 🧩 Giới thiệu
Đây là bài tập lập trình mô phỏng **cấu trúc dữ liệu cây nhị phân tìm kiếm (BST)** kết hợp với **chuyển đổi và xử lý biểu thức toán học** từ **dạng trung tố (infix)** sang **dạng hậu tố (postfix)** và **tiền tố (prefix)**.

Ứng dụng được viết bằng ngôn ngữ **C/C++**, giúp người học:
- Hiểu rõ cơ chế **duyệt cây nhị phân** (trung thứ tự, tiền thứ tự, hậu thứ tự).
- Rèn luyện kỹ năng **chuyển đổi biểu thức** dùng **ngăn xếp (stack)**.
- Thực hành xử lý **biểu thức toán học phức tạp** bằng thuật toán.

---

## ⚙️ Tính năng chính
1. **Tạo cây nhị phân (BST)** từ dữ liệu nhập vào.  
2. **Chuyển đổi biểu thức:**
   - Trung tố → Hậu tố  
   - Trung tố → Tiền tố  
3. **Tính giá trị biểu thức** hậu tố hoặc tiền tố.  
4. **Hiển thị cây biểu thức** (in-order, pre-order, post-order).  
5. **Xuất kết quả ra màn hình hoặc file**.

---

## 🧠 Thuật toán sử dụng
- **Stack** để xử lý thứ tự toán tử và ngoặc.  
- **Đệ quy** trong việc duyệt cây và tính giá trị.  
- **Cây nhị phân** để biểu diễn cấu trúc biểu thức toán học.  

---


## ▶️ Cách chạy chương trình
**1. Biên dịch (compile):**
```bash
g++ src/main.cpp src/bst.cpp src/expression.cpp -o CayBST
```

**2. Chạy chương trình:**
```bash
./CayBST
```

**3. Hoặc trên Windows:**
```bash
CayBST.exe
```

---

## 📥 Ví dụ biểu thức
```
Nhập biểu thức trung tố: (A+B)*(C-D)
Hậu tố: AB+CD-*
Tiền tố: *+AB-CD
Giá trị (nếu có A=5, B=2, C=8, D=3): 35
```

---

## 📚 Tác giả
- **Tên:** Đỗ Văn Hin  
- **Trường:** Đại học Công Nghệ Sài Gòn (STU)  
- **Môn học:** Cấu trúc dữ liệu & Giải thuật  
- **GVHD:** (điền tên giảng viên nếu có)

---

## 💡 Gợi ý mở rộng
- Thêm tính năng nhập biểu thức từ file.
- Vẽ cây biểu thức bằng ASCII hoặc thư viện đồ họa.
- Tính toán giá trị trực tiếp với số thực.
