/**
 * 题目：摄氏转华氏
 * 编译：gcc -o exe\1-4.exe 1-4.c
 */
#include <stdio.h>

#define LOWER   -20
#define UPPER   150
#define STEP    10

main() {
    int celsius;

    printf("摄氏转换为华氏\n");
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%3d %6.1f\n", celsius, (9.0 / 5.0) * celsius + 32);
    }
}
