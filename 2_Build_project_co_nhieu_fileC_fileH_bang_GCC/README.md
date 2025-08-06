# Dự án Build C với nhiều File và GCC

Đây là một dự án mẫu để minh họa cách build một dự án C có nhiều file nguồn (`.c`) và file header (`.h`) bằng trình biên dịch GCC.

## Cấu trúc dự án

Dự án bao gồm các file sau:

- `main.c`: File chính chứa hàm main của chương trình
- `lib.h`: File header chứa khai báo nguyên mẫu hàm
- `lib.c`: File nguồn chứa định nghĩa của các hàm

## Cách thức hoạt động

Dự án này minh họa hai cách để build một chương trình C có nhiều file:

### Cách 1: Build từng bước

1. Build các file `.c` thành file object (`.o`):

   ```bash
   gcc -c main.c -o main.o
   gcc -c lib.c -o lib.o
   ```

   Trong đó:

   - `-c`: Tạo ra file object
   - `-o`: Chỉ định tên file output

2. Link các file object thành file thực thi:

   ```bash
   gcc main.o lib.o -o program.exe
   ```

3. Chạy chương trình:

   ```bash
   .\program.exe
   ```

### Cách 2: Build trực tiếp với -I

Có thể build trực tiếp tất cả các file trong một lệnh duy nhất:

```bash
gcc main.c lib.c -o program.exe -I.
```

Trong đó:

- `-I.`: Chỉ định compiler tìm kiếm các file header trong thư mục hiện tại

## Lưu ý quan trọng

- Cách 2 (sử dụng `-I.`) chỉ hoạt động tốt khi tất cả các file đều nằm trong cùng một thư mục
- Nếu project có cấu trúc phức tạp với nhiều thư mục con, nên sử dụng Makefile để quản lý quá trình build
- File `.h` sử dụng header guard (`#ifndef`, `#define`, `#endif`) để tránh việc include nhiều lần

## Kết quả chạy chương trình

Khi chạy chương trình, output sẽ hiển thị:

```text
mFunction
Hello
```
