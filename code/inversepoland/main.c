/**
 * 逆波兰计算器
 */
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100

int main(){
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF)
        switch(type){
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '/':
            op2 = pop();
            if(op2 != 0.0)
                push(pop() - op2);
            else
                printf("erroe:zero divisor\n");
            break;
        default:
            printf("error:unknown command\n");
            break;
        }
    return 0;
}
