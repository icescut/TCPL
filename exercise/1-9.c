/**
 * 题目：将输入复制到输出，并将其中的连续多个空格用一个空格代替
 * 编译：gcc -o exe\1-9.exe 1-9.c
 */
#include <stdio.h>

#define IN   1
#define OUT  0

main() {
    int c, state = OUT;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t') {
            //第一个空格或tab输出空格，其后的空格或tab则忽略
            if(state == OUT) {
                putchar(' ');
                state = IN;
            }
        } else {
            putchar(c);
            state = OUT;
        }
    }
}
