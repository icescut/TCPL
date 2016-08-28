/**
 * 测试power函数
 * 编译：gcc -o exe\power.exe power.c
 */
#include <stdio.h>

int power(int m, int n);

main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    }
    return 0;
}

int power(int base, int n) {
    int res = 1;
    while(--n >= 0) {
        res *= base;
    }
    return res;
}
