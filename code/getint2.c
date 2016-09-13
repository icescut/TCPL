/**
 * 得到输入中的整数，测试指针参数的使用。改进版，处理输入中间有非整数的情况
 */
#include <ctype.h>
#include <stdio.h>

#define SIZE 100
#define NUMBER 1
#define CHAR 0

int getch(void);
void ungetch(int);
int getint(int*);

int main(){
    int i, n, res, array[SIZE];
    n = 0;
    res = getint(&array[n]);
    while(n < SIZE && res != EOF) {
        if(res == NUMBER) {
            ++n;
        } else {
            getch();
        }
        res = getint(&array[n]);
    }
    for(i = 0; i < n; i++)
        printf("%d\n", array[i]);
}

int getint(int *pn){
    int c, sign;
    while(isspace(c = getch()))
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return CHAR;
    }
    sign = c == '-' ? -1 : 1;
    if(c == '+' || c == '-')
        c = getch();
    for(*pn = 0; isdigit(c); c = fetch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if(c != EOF)
        ungetch(c);
    return c != EOF ? NUMBER : EOF;
}
