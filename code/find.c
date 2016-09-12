/**
 * 查找输入中符合命令行参数的行
 */
#include <string.h>
#include <stdio.h>
#define MAXLINE 1000

int getline(char *, int);

int main(int argc, char *argv[]){
    char line[MAXLINE];
    int found = 0;

    while(getline(line, MAXLINE) > 0)
        if(strstr(line, argv[1]) != NULL){
            printf("%s", line);
            ++found;
        }
    return found;
}
