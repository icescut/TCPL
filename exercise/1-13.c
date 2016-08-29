/**
 * 题目：打印输入中单词长度的直方图。水平方向的直方图比较容易。
 * 编译：gcc -o exe\1-13.exe 1-13.c
 */
#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN 50
main() {
    int c, state, i, j, len, other;
    int words[MAX_LEN+1] = {0};
    len = other = 0;
    state = OUT;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n'){
            if(len <= MAX_LEN)
                words[len]++;
            else
                other++;
            len = 0;
            state = OUT;
        } else {
            len++;
            state = IN;
        }
    }
    printf("word's length  count\n");
    for(i = 1; i <= MAX_LEN; i++){
        if(words[i] != 0){
            printf("%13d%7d", i, words[i]);
            for(j = 0; j < words[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
    if(other != 0)
        printf("There are %d words exceed the max length 50\n");
}
