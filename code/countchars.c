/**
 * 统计输入的字符数
 * 编译：gcc -o exe\countchars.exe countchars.c
 */
#include <stdio.h>
main() {
    double nc;
    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%0.f\n", nc);
}
