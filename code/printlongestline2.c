/**
 * 打印最长的输入行
 * 编译：gcc -o exe\printlongestline2.exe printlongestline2.c
 */
#include <stdio.h>

#define MAXLINE 1000    //允许输入行的最大长度

int max;    //目前最长
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main() {
    int len;    //当前行长度
    max = 0;
    while((len = getline()) > 0) {
        if(len > max) {
            max = len;
            copy();
        }
    }

    if(max > 0) {
        printf("%s\n", longest);
    }
    return 0;
}

int getline() {
    int c, i;

    for(i = 0; i < MAXLINE -1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if(c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void copy() {
    int i = 0;
    while(longest[i] = line[i])
        ++i;
}
