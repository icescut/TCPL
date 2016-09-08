/**
 * 得到s中有多少字符，不包括'\0'
 */
int strlen(char *s){
    char *p = s;
    while(*p != '\0')
        p++;
    return p - s;
}
