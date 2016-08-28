/**
 * 题目：在转换表的顶部打印一个标题
 * 编译：gcc -o exe\1-3.exe 1-3.c
 */
#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

main() {
    int fahr;

    printf("华氏  摄氏\n");
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
