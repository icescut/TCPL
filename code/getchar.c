/**
 * 无缓冲单字符输入
 */
#include <windows.h>

int main(){
    char c;
    return (read(0, &c, 1) == 1) ? (unsigned char)c : EOF;
}
