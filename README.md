# 🌳 CayBST – Chuyển đổi Biểu thức Trung tố ↔ Hậu tố / Tiền tố

[![Language](https://img.shields.io/badge/language-C%2B%2B-blue)](https://en.wikipedia.org/wiki/C%2B%2B)
[![License](https://img.shields.io/badge/license-MIT-green)](LICENSE)
[![Stars](https://img.shields.io/github/stars/Hinkoi04/CayBST-ChuyenDoiBieuThuc?style=social)](https://github.com/Hinkoi04/CayBST-ChuyenDoiBieuThuc/stargazers)

---

## 🧩 Giới thiệu
Dự án mô phỏng **cấu trúc dữ liệu cây nhị phân tìm kiếm (BST)** và quá trình **chuyển đổi biểu thức toán học**:
- Trung tố → Hậu tố  
- Trung tố → Tiền tố  

Ứng dụng được viết bằng **C++ (Visual Studio 2022)** nhằm hỗ trợ học tập và ôn luyện môn **Cấu trúc dữ liệu & Giải thuật** tại **Đại học Công Nghệ Sài Gòn (STU)**.

---

## ⚙️ Cấu trúc thư mục
```
CayBST-ChuyenDoiBieuThuc/
├── DoAnTinHoc_2024/      # Mã nguồn chính (.cpp, .h)
├── DoAnTinHoc_2024.sln   # File solution Visual Studio
├── LICENSE                # Giấy phép MIT
└── README.md              # Mô tả dự án
```

---

## 🚀 Hướng dẫn chạy
1. Mở **Visual Studio 2022**
2. Chọn `File → Open → Project/Solution`
3. Mở file `DoAnTinHoc_2024.sln`
4. Chọn cấu hình **Debug** hoặc **Release**
5. Nhấn **F5** để biên dịch và chạy chương trình

---

## 📖 Ví dụ biểu thức
```
Nhập biểu thức trung tố: (A+B)*(C-D)
Hậu tố: AB+CD-*
Tiền tố: *+AB-CD
Giá trị (nếu có A=5, B=2, C=8, D=3): 35
```

---

## 🧠 Thuật toán sử dụng
- **Stack (Ngăn xếp)**: Dùng để xác định thứ tự toán tử và ngoặc khi chuyển đổi.  
- **Đệ quy**: Dùng để duyệt và tính toán giá trị biểu thức.  
- **Cây nhị phân (Binary Tree)**: Biểu diễn cấu trúc của biểu thức toán học.

---

## 📸 Hình minh họa (gợi ý)
> Có thể chụp ảnh kết quả chương trình hiển thị cây biểu thức và thêm vào thư mục `/images` để minh họa trực quan hơn.

---

## 💡 Mở rộng
- Cho phép nhập biểu thức từ file.  
- Tính toán với số thực (float).  
- Vẽ cây biểu thức bằng đồ họa ASCII hoặc SFML.  
- Xuất biểu thức dưới dạng LaTeX.

---

## 📚 Tác giả
- **Tên:** Đỗ Văn Hin  
- **Trường:** Đại học Công Nghệ Sài Gòn (STU)  
- **Khóa:** 2021–2025  
- **Môn học:** Cấu trúc dữ liệu & Giải thuật  
- **GVHD:** (Điền tên giảng viên hướng dẫn nếu có)

---

## 📜 Giấy phép
Dự án này được phát hành dưới giấy phép **MIT License** – bạn có thể xem chi tiết trong file [LICENSE](LICENSE).

---

⭐ Nếu bạn thấy project này hữu ích, hãy **nhấn Star** trên GitHub để ủng hộ tác giả nhé!
