# Chương trình Makefile đơn giản

## Mô tả

Đây là một ví dụ đơn giản về cách sử dụng Makefile để biên dịch chương trình C. Project này bao gồm việc tổ chức code thành các file riêng biệt và sử dụng Makefile để tự động hóa quá trình biên dịch.

## Cấu trúc thư mục

```plaintext
.
├── main.c      # File chứa hàm main và điểm vào chương trình
├── lib.c       # File chứa định nghĩa các hàm
├── lib.h       # File header chứa khai báo các hàm
└── Makefile    # File định nghĩa quy tắc biên dịch
```

## Chi tiết các file

### main.c

- Chứa hàm `main()` của chương trình
- Import thư viện `lib.h`
- Gọi hàm `mfunction()` và in ra "Hello"

### lib.h

- File header chứa khai báo nguyên mẫu hàm `mfunction()`
- Sử dụng header guard để tránh include đệ quy

### lib.c

- Chứa định nghĩa chi tiết của hàm `mfunction()`
- Hàm này in ra chuỗi "mFunction"

### Makefile

- Định nghĩa quy tắc biên dịch chương trình
- Biên dịch các file `main.c` và `lib.c` thành file thực thi `thucthi.exe`
- Sử dụng cờ `-I.` để tìm kiếm file header trong thư mục hiện tại

## Cách sử dụng

1. Đảm bảo đã cài đặt GCC và Make trên hệ thống

2. Mở terminal trong thư mục project

3. Chạy lệnh sau để biên dịch:

    ```bash
    make main
    ```

4. Sau khi biên dịch thành công, chạy chương trình:

    ```bash
    .\thucthi.exe
    ```

5. Nếu có chỉnh sửa code trong các file, cần xóa file.exe đi rồi chạy lệnh make main lại để tạo file.exe mới

## Kết quả

Khi chạy chương trình, màn hình sẽ hiển thị:

```plaintext
mFunction
Hello
```
