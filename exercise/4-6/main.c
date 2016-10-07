/**
 * 题目: 修改逆波兰计算器，使用大写字母保存临时变量
 * 编译：gcc -o ..\exe\4-6.exe *.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define MAXOP 100

int main(){
    int type, var = 0;
    double op2, v, val[26] ={0.0};
    char s[MAXOP];

    while((type = getop(s)) != EOF){
        //printf("type = %c\n", type);
        switch(type){
        case NUMBER:
            push(atof(s));
            break;
        case NAME:
            mathfnc(s);
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
        case '%':
            op2 = pop();
            if(op2 != 0.0)
                push(fmod(pop(), op2));
            else
                printf("erroe:zero divisor\n");
            break;
        case '\n':
            v = pop();
            printf("\t%.8g\n", v);
            break;
        case '=':
            pop();
            if(var >= 'A' && var <= 'Z')
                push(val[var - 'A'] = pop());
            else
                printf("not valid variable\n");
            break;
        default:
            if(type >= 'A' && type <= 'Z')
                push(val[type - 'A']);
            else if(type == 'v')
                push(v);
            else
                printf("error:unknown command\n");
            break;
        }
        var = type;
    }
    return 0;
}

void mathfnc(char s[]){
    double op2;
    if(strcmp(s, "sin") == 0)
        push(sin(pop()));
    else if(strcmp(s, "cos") == 0)
        push(cos(pop()));
    else if(strcmp(s, "exp") == 0)
        push(exp(pop()));
    else if(strcmp(s, "pow") == 0){
        op2 = pop();
        push(pow(pop(), op2));
    } else
        printf("%s is not supported\n", s);
}
