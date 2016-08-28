/**
 * 统计输入的各个字符、空白符及其他字符出现的次数
 * 编译：gcc -o exe\countnumbers.exe countnumbers.c
 */
#include <stdio.h>

main() {
    int c, i, nwhite, nother;
    int ndigit[10] = {0};
    nwhite = nother = 0;

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            ndigit[c - '0']++;
        } else if(c == ' ' || c == '\t' || c == '\n') {
            nwhite++;
        } else {
            nother++;
        }
    }

    printf("dights =");
    for(i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
