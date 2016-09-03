/**
 * atof函数：把字符串s转换为相应的双精度浮点数
 */
#include <ctype.h>

double atof(char s[]) {
    //power为小数位对应的10的幂
    double val, power;
    int i, sign;

    //跳过空白符
    for(i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;

    for(val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power;
}
