/**
 * 题目: 将\t转换为空格。
 */
#include<stdio.h>
#define TABLEN 8

int main(){
    int c, nc = 0, pos = 0;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            nc = TABLEN - pos % TABLEN;
            while(nc-- > 0) {
                ++pos;
                putchar(' ');
            }
        } else if (c == '\n') {
            pos = 0;
        } else {
            ++pos;
            putchar(c);
        }
    }
    return 0;
}
