	/**
 * 题目: 修改打印最长文本行的程序，使之可以打印任意输入行的长度及尽量多地打印文本
 * 编译：gcc -o exe\1-16.exe 1-16.c
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
        printf("%d, %s");
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0) {
        printf("longest line:%s\n", longest);
    }
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

void copy(char *to, char *from) {
    while(*to++ = *from++);
}
