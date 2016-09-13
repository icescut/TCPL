/**
 * 简单计算器程序，读取输入然后累加
 * 编译：gcc -o exe\simplecalc.exe simplecalc.c atof.c getline.c
 */
#include <stdio.h>

#define MAXLINE 100

int main(){
    double sum, atof(char []);
    char line[MAXLINE];
    int getline(char [], int);

    while(getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
