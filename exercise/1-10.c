/**
 * 题目：将输入复制到输出，并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替换为\\
 * 编译：gcc -o exe\1-10.exe 1-10.c
 */
#include <stdio.h>

main() {
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            printf("\\t");
        } else if(c == '\b') {
            printf("\\b");
        } else if(c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
