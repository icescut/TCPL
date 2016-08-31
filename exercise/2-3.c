/**
 * 题目: 编写函数htoi(s),把由十六进制的字符串（可选前缀0x或0X)转换为与之等价的整型值。
 */
#include <ctype.h>
int htoi(char s[]){
    int i, b, res;
    i = res = 0;
    if(s[0] == '0' && tolower(s[1]) == 'x')
        i = 2;
    while(s[i] != '\0'){
        if(isdigit(s[i]))
            b = s[i] - 0;
        else
            b = tolower(s[i]) - 'a' + 10;
        res = res *16 + b;
        ++i;
    }
    return res;
}
