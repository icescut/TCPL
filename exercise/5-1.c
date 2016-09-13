/**
 * 如果+-后面不是数字，不作为0，作为非数字
 */
#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

int getint(int *pn){
    int c, d, sign;
    while(isspace(c = getch()))
        ;
    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = c == '-' ? -1 : 1;
    if(c == '+' || c == '-') {
        d = c;
        if(!isdigit(c = getch()) {
            if(c != EOF) {
                ungetch(c);
            }
            ungetch(d);
            return d;
        }
    }
    for(*pn = 0; isdigit(c); c = fetch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if(c != EOF)
        ungetch(c);
    return c;
}
