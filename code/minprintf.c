/**
 * 使用变长参数模拟printf
 * gcc -o exe\minprintf.exe minprintf.c
 */
#include <stdarg.h>

void minprintf(char *fmt, ...);

int main(int argc, char const *argv[]) {
    minprintf("%d %f %s\n", 12, 123.45, "Alan");
    return 0;
}

void minprintf(char *fmt, ...) {
    va_list ap;
    int ival;
    double dval;
    char *sval, *p = fmt;

    for(va_start(ap, fmt); *p; p++) {
        if(*p != '%') {
            putchar(*p);
            continue;
        }
        switch(*++p) {
        case 'd':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 's':
            sval = va_arg(ap, char *);
            printf("%s", sval);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap);
}
