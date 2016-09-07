	/**
 * 题目: 使得可以处理EOF（-1）
 */
#include <stdio.h>
#include <string.h>
#include "calc.h"

#define BUFSIZE 100
int bufp = 0;
int buf[BUFSIZE]

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp < BUFSIZE)
        buf[bufp++] = c;
    else
        printf("ungetch: buf is full\n");
}
