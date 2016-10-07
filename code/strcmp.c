/**
 * 按字典顺序比较s和t，s小于t返回负数，s大于t返回正数，相等返回0
 */
int strcmp(char *s, char *t){
    for(;*s == *t; s++,t++)
        if(*s == '\0')
            return 0;
    return *s - *t;
}
