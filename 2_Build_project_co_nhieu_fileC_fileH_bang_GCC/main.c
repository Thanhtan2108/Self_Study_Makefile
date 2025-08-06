/*
Với project gồm có nhiều file.c, file.h thì việc chỉ build 1 file.c thành file.exe 
để thực thi là không được vì các file có liên kết với nhau
Ta cần build lần lượt các file.c thành các file.o(file object) tương ứng
Tiếp theo cần link các file.o lại thành 1 file.exe
*/

#include <stdio.h>
#include "lib.h"

int main() {
    mfunction();
    printf("Hello\n");
    return 0;
}
