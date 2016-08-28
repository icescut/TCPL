/**
 * 统计输入的单词数
 * 编译：gcc -o exe\countwords.exe countwords.c
 */
#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if(c == '\n')
            nl++;
        if(c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT){   //只在出OUT状态进入IN状态的时候计算一次
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}
