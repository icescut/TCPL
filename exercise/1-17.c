		/**
 * 打印长度大于80个字符的输入行
 * 编译：gcc -o exe\1-17.exe 1-17.c
 */
#include <stdio.h>

#define LINELEN 80    //允许输入行的最小长度

int getline(char line[], int maxline)

main() {
    int len;    //当前行长度
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0) {
        if(len > LINELEN)
            printf("%s", line);
    return 0;
}

int getline(char s[], int lim) {
    int c, i, j;

    j = 0;
    for(i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if(j < lim - 2)
            s[j++] = c;
    }
    if(c == '\n') {
        s[j++] = c;
        i++;
    }
    s[j] = '\0';
    return i;
}
