/**
 * 题目：编写一个统计空格、制表符与换行符个数的程序
 * 编译：gcc -o exe\1-8.exe 1-8.c
 */
#include <stdio.h>

main() {
    int c;
    //空格个数
    int nc;
    //制表符个数
    int nt;
    //换行符个数
    int nl;

    nc = nt = nl = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ')
            nc++;
        if(c == '\t')
            nt++;
        if(c == '\n')
            nl++;
    }
    printf("%d %d %d\n", nc, nt, nl);
}
