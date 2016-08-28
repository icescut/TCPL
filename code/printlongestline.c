/**
 * 打印最长的输入行
 * 编译：gcc -o exe\printlongestline.exe printlongestline.c
 */
#include <stdio.h>

#define MAXLINE 1000    //允许输入行的最大长度

int getline(char line[], int maxline);
void copy(char *to, char *from);

main() {
    int len;    //当前行长度
    int max;    //目前最长
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getline(line, MAXLINE)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0) {
        printf("%s\n", longest);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

void copy(char *to, char *from) {
    while(*to++ = *from++);
}
