/**
 * 删除每个输入行末尾的空格及制表符，删除完全是空格的行
 * 编译：gcc -o exe\1-18.exe 1-18.c
 */
#include <stdio.h>

#define MAXLINE 1000    //允许输入行的最大长度

int getline(char line[], int maxline);
//如果使用remove作为名字，与stdio中的remove冲突
int remove_blank(char s[]);

main() {
    char line[MAXLINE];

    while(getline(line, MAXLINE) > 0) {
        if(remove_blank(line) > 0)
            printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

/**
 * 可以用指针从前往后扫，更方便
 */
int remove_blank(char s[]){
    int i;
    for(i = 0; s[i] != '\n'; i++);
    --i;
    while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if(i >= 0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
