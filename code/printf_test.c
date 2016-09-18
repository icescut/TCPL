/**
 * printf函数测试
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
