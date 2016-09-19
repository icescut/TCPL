/**
 *题目: 以合理方式打印所有输入，至少能用八进制或十六进制打印非显示字符，并截断长文本
 */
#include <stdio.h>

#define MAXLEN 20

int incpos(int pos, int n);
int main() {
    int c, pos = 0;

    while((c = getchar()) != EOF) {
        if(iscntrl(c)) {
            pos = incpos(pos, 5);
            printf(" \\%02x ", c);
            if(c == '\n') {
                pos = 0;
                putchar(c);
            }
        } else {
            pos = incpos(pos, 1);
            putchar(c);
        }
    }
    return 0;
}

int incpos(int pos, int n) {
    if(pos + n > MAXLEN) {
        putchar('\n');
        return n;
    } else
        return pos + n;
}
