	/**
  * 题目: 扩展minprintf，使与printf的功能更接近
 */
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

void minprintf(char *fmt, ...) {
    va_list ap;
    int *ival, i;
    double *dval;
    char *sval, *p = fmt;
    char subfmt[20];
    
    for(va_start(ap,fmt);*p;p++) {
        if(*p != '%') {
            putchar(*p);
            continue;
        }
        i = 0;
        subfmt[0] = '%';
        while(*(p+1) && !isalpha(subfmt[++i] = *++p)
            ;
        sunfmt[++i] = '\0';
        switch(*p) {
        case 'd':
        case 'i':
            ival = va_arg(ap, int);
            printf(subfmt, ival);
            break;
        case 'f':
        case 'g':
            dval = va_arg(ap, double);
            printf(subfmt, dval);
            break;
        case 's':
            sval = va_arg(ap, char *);
            printf(subfmt, sval);
            break;
        default:
            printf(subfmt);
            break;
        }
    }
    va_end(ap);
}
