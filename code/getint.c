/**
 * 得到输入中的整数，测试指针参数的使用
 */
#include <ctype.h>
#include <stdio.h>

#define SIZE 100

int getch(void);
void ungetch(int);
int getint(int*);

int main(){
    int i, n, array[SIZE];
    for(n = 0; getint(&array[n]) != EOF; n++)
        ;
    for(i = 0; i < n; i++)
        printf("%d\n", array[i]);
}

/**
 * 无法处理数字中间有字母的情况，只能用空格分开
 */
int getint(int *pn){
    int c, sign;
    while(isspace(c = getch()))
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = c == '-' ? -1 : 1;
    if(c == '+' || c == '-')
        c = getch();
    for(*pn = 0; isdigit(c); c = fetch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if(c != EOF)
        ungetch(c);
    return c;
}
