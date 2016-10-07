/**
 * 完善atof函数：把字符串s转换为相应的双精度浮点数支持指数
 * 编译：gcc -o exe\4-2.exe 4-2.c
 */
#include <ctype.h>

double atof(char s[]);

int main(int argc, char const *argv[]) {
    char *s = "1.23e-2";
    printf("%g\n", atof(s));
    return 0;
}

double atof(char s[]) {
    //power为小数位对应的10的幂
    double val, power, power2, e, factor;
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

    if(s[i] == 'e' || s[i] == 'E')
        i++;
    factor = s[i] == '-' ? 0.1 : 10;
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(e = 0; isdigit(s[i]); i++)
        e = 10 * e + (s[i] - '0');
    power2 = 1;
    for(i = 1; i <= e; i++)
        power2 *= factor;

    return sign * val / power * power2;
}
