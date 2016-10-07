/**
 * 打印命令行输入
 * gcc -o exe\commandline2.exe commandline2.c
 */
#include <stdio.h>

int main(int argc, char *argv[]){
    while(--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    printf("\n");
    return 0;
}
