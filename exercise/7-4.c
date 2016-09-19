	/**
  * 题目: 编写minscanf模仿库函数scanf
 */
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

void minscanf(char *fmt, ...) {
    va_list ap;
    int *ival, i = 0;
    float *dval;
    char *sval, *p = fmt;
    char subfmt[20];
    
    for(va_start(ap,fmt);*p;p++) {
        if(*p != '%') {
            subfmt[i++] = *p;
            continue;
        }
        subfmt[i++] = '%';
        while(*(p+1) && !isalpha(subfmt[i++] = *++p)
            ;
        sunfmt[i] = '\0';
        switch(*p) {
        case 'd':
        case 'i':
            ival = va_arg(ap, int *);
            scanf(subfmt, ival);
            break;
        case 'f':
            dval = va_arg(ap, float *);
            scanf(subfmt, dval);
            break;
        case 's':
            sval = va_arg(ap, char *);
            scanf(subfmt, sval);
            break;
        default:
            scanf(subfmt);
            break;
        }
        i = 0;
    }
    va_end(ap);
}
