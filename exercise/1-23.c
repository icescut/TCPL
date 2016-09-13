/**
 * 题目: 删除输入中所有的C语言注释，注意不要删除单双引号中的
 */
#include <stdio.h>
void checkinput(int);
void checkquote(int);

int main() {
    int c;
    while((c = getchar() != EOF) {
        chechinput(c);
    }
    return 0;
}

void checkinput(int c) {
    int d;
    switch(c) {
    case '/' :
        if((d = getchar()) == '*') {
            c = getchar();
            d = getchar();
            while(c != '*' || d != '/') { 
                c = d;
                d = getchar();
            }
        } else {
            putchar(c);
            chechinput(d);
        }
        break;
    case '\'' :
    case '"' :
        chechquote(c);
        break;
    default:
        putchar(c);
        break;
    }
}

void checkquote(int c) {
    int d;
    putchar(c);
    while((d = getchar()) != c) {
        putchar(d);
        // 引号的转义不能作为结束
        if(d == '\\') {
            putchar(getchar());
        }
    }
    putchar(d);
}
