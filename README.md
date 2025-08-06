# Tự học Makefile cơ bản

## 1. Giới thiệu

IDE hiểu đơn giản là một giao diện để phát triển code (Text Editor) kèm môi trường compiler (GCC, …).  
Bình thường khi build một project C/C++ sẽ dùng IDE như Dev C++, VS 2019, KeilC, …  
Makefile ra đời để build project vừa và nhỏ mà không cần IDE, chỉ với command-line.  
Project nhỏ có thể gồm nhiều file `.c`, `.h` ở các thư mục khác nhau, nhưng chỉ cần vài dòng lệnh để sinh file `.exe` hoặc `.bin`.

---

## 2. Cài môi trường MSYS2, GCC

1. **Cài MSYS2**  
   - Truy cập: [https://www.msys2.org/](https://www.msys2.org/)  
   - Thực hiện theo hướng dẫn trên trang chủ

2. **Add MSYS2 vào PATH**  
   1. Mở **View advanced system settings**  
   2. Trong **System Properties** → **Environment Variables…**  
   3. Ở **System variables** → **Path** → **New**, thêm hai đường dẫn:

      ```bash
      C:\msys64\usr\bin
      C:\msys64\ucrt64\bin
      ```

   4. Nhấn **OK** ba lần

3. **Cài thêm make và GCC**  
   1. Mở **MSYS2 UCRT64 Shell**  
   2. Chạy:

      ```sh
      pacman -Syu
      pacman -S make gcc
      ```

   3. Kiểm tra:

      ```bash
      where make
      make --version
      ```

   4. Nếu hiển thị đường dẫn và phiên bản make là thành công

4. **Cài gdb**  
   1. Mở **MSYS2 UCRT64 Shell**  
   2. Chạy:

      ```sh
      pacman -Syu            # Cập nhật database & base packages
      # Nếu pacman yêu cầu restart shell, đóng rồi mở lại và chạy:
      pacman -Su             # Cập nhật tiếp
      pacman -S mingw-w64-ucrt-x86_64-gdb
      ```

   3. Kiểm tra:

      ```bash
      where gdb
      gdb --version
      ```

   4. Nếu hiển thị đường dẫn và phiên bản gdb là thành công

---

## 3. Bắt đầu seri tự học

Tổ chức thành **9 folder** tương ứng với 9 bài học.  

---

## 4. Clone & Chạy trên VS Code

1. **Clone repository từ GitHub về máy**  

   ```sh
   git clone https://github.com/<Thanhtan2108>/<Self_Study_Makefile>.git
    ```

2. **Mở project trong VS Code**
    - Chọn File → Open Folder… và trỏ đến thư mục vừa clone
    - Hoặc từ terminal:

        ```bash
        code <Self_Study_Makefile>
        ```
