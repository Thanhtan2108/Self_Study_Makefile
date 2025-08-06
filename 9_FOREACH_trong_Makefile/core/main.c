/*
Bản chất makefile dùng để thực thi các command line
Khi dùng makefile để rebuild 1 project, nó chỉ rebuild lại những file đã thay đổi, làm giảm thời gian rebuild
*/

#include <stdio.h>
#include "lib.h"
#include "a.h"
#include "b.h"

int main() {
    mfunction();
    printf("Hello\n");
    return 0;
}