/**
 * 题目: 给字符串处理函数们加上第三个参数，限制字符数
 */
void strncpy(char *s, char *t, int n) {
    while(*t && n--  > 0)
        *s++ = *t++;
    while(n-- > 0)
        *s++ = '\0';
    *s = '\0';
}

void strncat(char *s, char *t, int n) {
    while(*s)
        s++;
    while(*t && n-- > 0)
        *s++ = *t++;
    *s = '\0';
}

int strncmp(char *s, char *t, int n) {
    for(;*s == *t, s++, t++)
        if(*s == '\0' || --n <= 0)
            return 0;
    return *s - *t;
}
