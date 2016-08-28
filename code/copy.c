/**
 * 把输入字符复制到输出
 * 编译：gcc -o exe\copy.exe copy.c
 */
#include <stdio.h>
main() {
    int c;
    while((c = getchar()) != EOF)
        putchar(c);
}
