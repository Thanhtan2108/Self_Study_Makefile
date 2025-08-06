# Xây Dựng Project C Sử Dụng Trình Biên Dịch GCC

Đây là một project đơn giản để minh họa cách biên dịch chương trình C sử dụng trình biên dịch GCC mà không cần IDE.

## Cấu Trúc Project

- `main.c`: Chương trình C đơn giản in ra "Hello world"

## Cách Biên Dịch và Chạy Chương Trình

1. Mở terminal tại thư mục chứa project
2. Biên dịch chương trình bằng GCC:

   ```bash
   gcc main.c -o main.exe
   ```

   Trong đó:

   - `main.c` là file mã nguồn
   - `-o` chỉ định tên file đầu ra
   - `main.exe` là file thực thi được tạo ra

3. Chạy chương trình:

   ```bash
   .\main.exe
   ```

## Lưu Ý

- Mỗi khi thay đổi mã nguồn, bạn cần biên dịch lại chương trình bằng GCC
- File đầu ra (`.exe`) là file nhị phân đã được biên dịch và có thể chạy trực tiếp
