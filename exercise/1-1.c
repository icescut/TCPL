/**
 * 题目：有意去掉"hello, world"程序的部分内容，看会得到什么出错信息
 * 编译：gcc -o exe\1-1.exe 1-1.c
 * 结果：
 *1-1.c: In function `main':
 *1-1.c:7: error: missing terminating " character
 *1-1.c:8: error: syntax error before '}' token
 */
#include <stdio.h>
main() {

    printf("hello, world\n);
}
