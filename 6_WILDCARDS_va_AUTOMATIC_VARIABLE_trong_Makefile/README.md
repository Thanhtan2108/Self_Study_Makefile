# Ký Tự Đặc Biệt trong Makefile

## WILDCARDS (Ký tự đại diện)

WILDCARDS là các ký tự đặc biệt dùng để khớp với nhiều tên file có cùng định dạng. Trong Makefile, wildcards giúp xử lý nhiều file cùng lúc mà không cần liệt kê từng file.

### Các wildcards phổ biến

1. **Pattern (%)**

   - `%.o`: Khớp với bất kỳ file nào có đuôi `.o`
   - `%.c`: Khớp với bất kỳ file nào có đuôi `.c`
   - Ví dụ: `%.o: %.c` nghĩa là rule này áp dụng cho việc tạo file `.o` từ file `.c` tương ứng

2. **Wildcard khác**
   - `*`: Khớp với bất kỳ chuỗi ký tự nào
   - `?`: Khớp với một ký tự đơn
   - `[...]`: Khớp với một ký tự trong tập hợp

### Ví dụ WILDCARDS

```makefile
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

%.o: %.c
    $(CC) -c $< -o $@
```

## AUTOMATIC VARIABLES (Biến tự động)

Automatic variables là các biến đặc biệt được Makefile tự động cập nhật giá trị trong quá trình thực thi. Chúng giúp truy cập các thành phần của rule một cách dễ dàng.

### Các biến tự động phổ biến

1. **$@**

   - Tên của target trong rule hiện tại
   - Ví dụ: Trong rule `prog: main.o`, `$@` = `prog`

2. **$<**

   - Thành phần đầu tiên trong danh sách dependencies
   - Ví dụ: Trong rule `prog: main.o util.o`, `$<` = `main.o`

3. **$^**

   - Tất cả các dependencies (không lặp lại)
   - Ví dụ: Trong rule `prog: main.o util.o`, `$^` = `main.o util.o`

4. **$?**
   - Các dependencies mới hơn target
   - Hữu ích cho việc rebuild có chọn lọc

### Ví dụ Automatic Variables

```makefile
program: main.o lib.o
    $(CC) $^ -o $@

%.o: %.c
    $(CC) -c $< -o $@
```

## Lưu ý quan trọng

- WILDCARDS giúp viết Makefile ngắn gọn và linh hoạt hơn
- AUTOMATIC VARIABLES giúp tránh lặp lại và giảm lỗi khi viết rule
- Nên sử dụng comment để giải thích ý nghĩa của các pattern phức tạp
