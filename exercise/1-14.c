/**
 * 题目：打印各个字符出现频度的直方图。
 * 编译：gcc -o exe\1-14.exe 1-14.c
 */
#include <stdio.h>
#include <ctype.h>
#define MAX_CHAR 128
main() {
    int c, i, j;
    int chars[MAX_CHAR] = {0};

    while((c = getchar()) != EOF) {
        if(c < MAX_CHAR)
            chars[c]++;
    }
    printf("char  count\n");
    for(i = 0; i <= MAX_CHAR; i++){
        if(chars[i] != 0 && isprint(i)){
            printf("%c%7d", i, chars[i]);
            for(j = 0; j < chars[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
    return 0;
}
