/**
 * 实现库函数fgets
 */
char *fgets(char *line, char *maxline, FILE *fp) {
    int c;
    char *cs = line;

    while(--maxline > 0 && (c = getc(fp)) != EOF) {
        if((*cs++ = c) == '\n')
            break;
    }
    *cs = '\0'
    return ( c == EOF && cs == line) ? NULL : line;
}
