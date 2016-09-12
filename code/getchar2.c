/**
 * 带缓冲的一次读取一个字符
 */
#include <windows.h>
#define BUFSIZE 1024

int getchar(void){
    static char[BUFSIZE];
    static char *bufp = buf;
    static int n;

    if(n == 0){
        n = read(0, buf, BUFSIZE);
        bufp = buf;
    }

    return (--n >= 0) (unsigned char)*bufp++ : EOF;
}

