	/**
 * 查找输入中符合命令行参数的行
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
                finf("find: illegal option\n");
                argc = 0;
                found = -1;
                break;
            }
        }
    }

    while(getline(line, MAXLINE) > 0){
        lineno++;
        if((strstr(line, argv[1]) != NULL) != except){
            if(number){
                printf("%ld:", lineno);
            }
            printf("%s", line);
            ++found;
        }
    }
    return found;
}
