/**
 * 复制输入到输出
 */
#include <windows.h>

#define BUFSIZE 256

int main(){
    char buf[BUFSIZE];
    int n;
    while((n = read(0, buf, BUFSIZE)) > 0)
        write(1, buf, n);
    return 0;
}
