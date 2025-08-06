# Biến trong Makefile

## Giới thiệu

Trong Makefile, biến (variables) là một thành phần quan trọng giúp lưu trữ và tái sử dụng các giá trị. Việc sử dụng biến giúp code trở nên linh hoạt và dễ bảo trì hơn.

## Cú pháp khai báo biến

1. **Cách khai báo biến**:

   ```makefile
   NAME = VALUE
   ```

2. **Cách sử dụng biến**:
   - Sử dụng `${NAME}`
   - Hoặc `$(NAME)`

## Các biến thường dùng trong Makefile

1. **Compiler (CC)**:

   - `CC = gcc`: Dùng cho các file `.c`
   - `CC = g++`: Dùng cho các file `.cpp`

2. **Compiler Flags (CFLAGS)**:

   - `CFLAGS = -I.`: Flag chỉ định thư mục chứa header files
   - Có thể thêm các flag khác như:
     - `-Wall`: Hiển thị tất cả cảnh báo
     - `-O2`: Tối ưu hóa code mức 2
     - `-g`: Thêm thông tin debug

3. **Dependencies (DEPS)**:
   - `DEPS = lib.h`: Liệt kê các file header cần thiết
   - Có thể khai báo nhiều file: `DEPS = lib1.h lib2.h`

## Ví dụ sử dụng

```makefile
CC = gcc
CFLAGS = -I.
DEPS = lib.h
OBJS = main.o lib.o

${TARGET}: ${OBJS}
    ${CC} -o ${TARGET} ${OBJS}
```

## Lưu ý

- Tên biến phân biệt chữ hoa/thường
- Giá trị biến có thể được ghi đè khi chạy make
- Nên sử dụng biến để dễ dàng thay đổi và bảo trì code
