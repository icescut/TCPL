/**
 * 题目: 改写getch,ungetch，缓冲区只有一个字符
 */
#include <stdio.h>
#include "calc.h"

char buf = 0;

int getch(void){
    int c = (buf != 0) ? buf : getchar();
    buf = 0;
    return c;
}

void ungetch(int c){
    if(buf == 0)
        buf = c;
    else
        printf("ungetch: buf is full\n");
}
