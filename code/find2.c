/**
 * 查找输入中符合命令行参数的行
 * gcc -o exe\find2.exe find2.c getline.c
 * 例子：find.exe -x -n rld
 *      find.exe -xn rld
 */
#include <string.h>
#include <stdio.h>
#define MAXLINE 1000

int getline(char *, int);

int main(int argc, char *argv[]){
    char line[MAXLINE];
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;

    while(--argc > 0 && (*++argv)[0] == '-'){
        while(c = *++argv[0]){
            switch(c) {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("find: illegal option\n");
                argc = 0;
                found = -1;
                break;
            }
        }
    }

    if(argc != 1)
        printf("Usage: find -x -n pattern\n");
    else
        while(getline(line, MAXLINE) > 0){
            lineno++;
            if((strstr(line, *argv) != NULL) != except){
                if(number){
                    printf("%ld:", lineno);
                }
                printf("%s", line);
                ++found;
            }
        }
    return found;
}
