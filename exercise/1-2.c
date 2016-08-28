/**
 * 题目：当printf函数的参数字符串中包含\c，观察会出现什么情况
 * 编译：gcc -o exe\1-2.exe 1-2.c
 * 结果：
 *1-2.c:7:12: warning: unknown escape sequence '\c'
 *编译有warning，但仍可以执行，打印"hello, wocrld"
 */
#include <stdio.h>
main() {
    printf("hello, wo\crld\n");
}
