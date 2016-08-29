/**
 * 题目: 编写函数reverse(s)，将字符串s中字符的顺序颠倒过来。编写程序，每次颠倒一个输入行的字符顺序
 * 编译：gcc -o exe\1-19.exe 1-19.c
 */
#include <stdio.h>

#define MAXLINE 1000    //允许输入行的最大长度

int getline(char line[], int maxline);
void reverse(char s[]);

main() {
    char line[MAXLINE];

    while(getline(line, MAXLINE) > 0) {
        reverse(line)
        printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
          s[i++] = c;
    }
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[]){
    int i, j, temp;
    i = 0;
    for(j = 0; s[j] != '\n'; j++);
    --j;
    while(i < j){
        temp = s[i];
        s[i++] = s[j];
        s[j--] = temp;
    }
}
