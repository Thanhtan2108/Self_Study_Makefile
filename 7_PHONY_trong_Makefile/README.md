# PHONY trong Makefile

## Vấn đề khi không sử dụng PHONY

Khi làm việc với Makefile, đôi khi chúng ta gặp trường hợp tên của target trong Makefile trùng với tên của một file thật trong thư mục. Khi điều này xảy ra, make sẽ kiểm tra xem file đó có cần được cập nhật hay không dựa trên timestamp. Nếu file tồn tại và không có thay đổi, make sẽ bỏ qua target đó và hiển thị thông báo:

```bash
make: 'Target' is up to date.
```

## Giải pháp sử dụng .PHONY

Để khắc phục vấn đề này, chúng ta sử dụng directive `.PHONY`. Khi một target được đánh dấu là phony, make sẽ luôn thực thi các lệnh trong target đó mà không quan tâm đến việc có tồn tại file cùng tên hay không.

Cú pháp:

```bash
.PHONY: target_name
target_name: dependencies
    commands
```

## Các target phổ biến thường được đánh dấu PHONY

1. **all**: Target mặc định để build toàn bộ project
2. **clean**: Xóa các file đã được build và các file tạm
3. **install**: Cài đặt project vào hệ thống
4. **uninstall**: Gỡ cài đặt project khỏi hệ thống
5. **test**: Chạy các test case
6. **help**: Hiển thị thông tin trợ giúp về các target có sẵn

## Ví dụ thực tế

```makefile
.PHONY: all clean test

all: program

clean:
    rm -f *.o program

test: program
    ./run_tests.sh
```

Trong ví dụ trên, cả ba target `all`, `clean`, và `test` đều được đánh dấu là phony để đảm bảo chúng luôn được thực thi khi được gọi.
