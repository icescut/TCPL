/**
 * 题目: 修改逆波兰计算器，增加几个操作:不弹出元素下打印栈顶元素/复制栈顶元素/交换栈顶元素/清空栈。
 * 编译：gcc -o ..\exe\4-4.exe *.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define MAXOP 100

int main(){
    int type;
    double op1, op2;
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
        case '?':
            op2 = pop();
            printf("%f\n", op2);
            push(op2);
            break;
        case 'd':
            op2 = pop();
            push(op2);
            push(op2);
            break;
        case 'w':
            op2 = pop();
            op1 = pop();
            push(op2);
            push(op1);
            break;
        case 'c':
            clear();
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error:unknown command\n");
            break;
        }
    return 0;
}
