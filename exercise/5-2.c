/**
 * 题目: 改写getint，得到输入中的浮点数
 */
#include <ctype.h>
#include <stdio.h>

#define SIZE 100

int getch(void);
void ungetch(int);
int getint(float*);

int main(){
    int i, n;
    float array[SIZE];
    for(n = 0; getfloat(&array[n]) != EOF; n++)
        ;
    for(i = 0; i < n; i++)
        printf("%g\n", array[i]);
}

int getfloat(float *pn){
    int c, sign;
    float power;
    while(isspace(c = getch()))
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = c == '-' ? -1 : 1;
    if(c == '+' || c == '-')
        c = getch();
    for(*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    if(c == '.') {
        c = getch();
    }
    for(power = 1.0; isdigit(c); c = getch()) {
        power *= 10.0;
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign / power;
    if(c != EOF)
        ungetch(c);
    return c;
}
