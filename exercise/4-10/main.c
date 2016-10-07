/**
 * 题目：逆波兰计算器，使用getline代替getch和ungetch
 * gcc -o ..\exe\4-10.exe *.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100

int main(){
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF) {
        //printf("type = %c", type);
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
                push(pop() / op2);
            else
                printf("erroe:zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error:unknown command %c\n", type);
            break;
        }
    }
    return 0;
}
