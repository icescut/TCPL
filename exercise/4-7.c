/**
 * 题目: 编写ungets，一次把多个字符压回buf
 */
#include <stdio.h>
#include <string.h>
#include "calc.h"

#define BUFSIZE 100
int bufp = 0;
char buf[BUFSIZE]

int getch(void){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    if(bufp < BUFSIZE)
        buf[bufp++] = c;
    else
        printf("ungetch: buf is full\n");
}

void ungets(char s[]){
    int len = strlen(s);

    while(len > 0)
        ungetch(s[--len]);
}
