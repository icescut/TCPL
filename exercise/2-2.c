	/**
 * 不使用&&或||的条件下编写一个与for循环等价的循环语句
 * 编译：gcc -o exe\2-2.exe 2-2.c
 */
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MAXLINE 1000    //允许输入行的最大长度

int getline(char line[], int maxline);

main() {
    char line[MAXLINE];

    while(getline(line, MAXLINE) > 0) {
       printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i, flag;

    /*
    for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    */
    i = 0;
    flag = TRUE;
    while(flag){
        if(i >= lim - 1)
            flag = FALSE;
        else if((c = getchar()) == '\n')
            flag = FALSE;
        else if(c == EOF)
            flag = FALSE;
        else
            s[i++] = c;
    }
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
