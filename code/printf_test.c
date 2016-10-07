/**
 * printf函数测试
 * gcc -o exe\printf_test.exe printf_test.c
 */
#include <stdio.h>

int main() {
    int max = 10;
    char *s = "hello, world";

    printf("%.*s\n%*s\n", max, s, max, s);
    printf("%s\n", s);
    printf("%10s\n", s);
    printf("%.10s\n", s);
    printf("%-10s\n", s);
    printf("%.15s\n", s);
    printf("%-15s\n", s);
    printf("%15.10s\n", s);
    printf("%-15.10s\n", s);
    return 0;
}
