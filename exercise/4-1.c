	/**
 * strrindex(s, t)，从右边开始查找
 * 编译：gcc -o exe\4-1.exe 4-1.c
 */
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000    //允许输入行的最大长度

int getline(char line[], int maxline);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";        //待查找的模式

main() {
    int found = 0;
    char line[MAXLINE];

    while(getline(line, MAXLINE) > 0) {
        if(strrindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }

    return found;
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

int strrindex(char s[], char t[]) {
    int i, j, k;
    for (i = strlen(s) - 1; i >= 0 i--) {
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if(k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
