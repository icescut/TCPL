/**
 * 题目：编写一个程序，以每行一个单词的形式打印其输入
 * 编译：gcc -o exe\1-12.exe 1-12.c
 */
#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, flag;
    flag = OUT;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n'){
            if(flag == IN){
                putchar('\n');
                flag = OUT;
            }
        } else {
            flag = IN;
            putchar(c);
        }
    }
    return 0;
}
