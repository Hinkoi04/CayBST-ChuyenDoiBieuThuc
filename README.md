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
⚙️ 1️⃣ Mở Codespace

Truy cập repository trên GitHub của bạn.

Nhấn nút “Code → Open with Codespaces → New codespace”.

Chờ vài phút để GitHub tự khởi tạo môi trường Ubuntu (Linux).

🧩 2️⃣ Cấu trúc project

Bên trong Codespaces, project của bạn có cấu trúc:

/workspaces/CayBST-ChuyenDoiBieuThuc/
│
├── DoAnTinHoc_2024/
│   ├── Main.cpp
│   ├── Source.cpp
│   ├── Header.h
│
├── DoAnTinHoc_2024.sln
├── README.md
└── LICENSE

🚀 3️⃣ Biên dịch chương trình

Mở Terminal trong Codespaces (Ctrl + ~) và gõ lệnh:

g++ DoAnTinHoc_2024/Main.cpp DoAnTinHoc_2024/Source.cpp -o CayBST


✅ Nếu không có lỗi, Codespaces sẽ tạo ra file thực thi CayBST trong thư mục hiện tại.

▶️ 4️⃣ Chạy chương trình

Sau khi biên dịch xong, chạy chương trình bằng lệnh:

./CayBST

## 🧠 Thuật toán sử dụng
- **Đệ quy**: Dùng để duyệt và tính toán giá trị biểu thức.  
- **Cây nhị phân (Binary Tree)**: Biểu diễn cấu trúc của biểu thức toán học.

---


## 💡 Mở rộng (Chưa có)
- Cho phép nhập biểu thức từ file.  
- Tính toán với số thực (float).  
- Vẽ cây biểu thức bằng đồ họa ASCII hoặc SFML.  
- Xuất biểu thức dưới dạng LaTeX.

---




⭐ Nếu bạn thấy project này hữu ích, hãy **nhấn Star** trên GitHub để ủng hộ tác giả nhé!
