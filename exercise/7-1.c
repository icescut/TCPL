/**
 * 题目: 根据程序的名字，把字符串转换为小写或大写
 */
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int c;
    if(strcmp(argv[0], "lower") == 0)
        while((c = getchar()) != EOF)
            putchar(tolower(c));
    else if(strcmp(argv[0], "upper") == 0)
        while((c = getchar()) != EOF)
            putchar(touppwr(c));
    return 0;
}
