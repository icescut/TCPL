/**
 * 使用变长参数模拟printf
 */
#include <stdarg.h>

void minprintf(char *fmt, ...) {
    va_list ap;
    int *ival;
    double *dval;
    char *sval, *p = fmt;
    
    for(va_start(ap,fmt);*p;p++) {
        if(*p != '%') {
            putchar(*p);
            continue;
        }
        switch(*++p) {
        case 'd':
            ival = va_arg(ap, int);
            printf("%d\n", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f\n", dval);
            break;
        case 's':
            sval = va_arg(ap, char *);
            printf("%s\n", sval);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap);
}
