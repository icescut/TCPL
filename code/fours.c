#include <stdio.h>

int fputs(char *line, FILE *fp) {
    int c;
    while(c = *line++)
        putc(c, fp);
    return ferror(fp) ? EOF : 0;
}
