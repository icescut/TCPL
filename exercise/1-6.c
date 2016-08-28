/**
 * 题目：验证表达式getchar() != EOF的值是0还是1
 * 编译：gcc -o exe\1-6.exe 1-6.c
 */
#include <stdio.h>
main() {
    int c;
    //结果是1
    printf("%d\n", getchar() != EOF);
}
