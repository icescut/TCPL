/**
 * 题目: 编写函数strend(s, t)，如果t出现在s的尾部，返回1，否则返回0
 */
int strend(char *s, char *t) {
    char *bs = s, *bt = t;
    while(*s++)
        ;
    while(*t++)
        ;
    while(*--s == *--t) {
        if(bs == s || bt == t)
            break;
    }
    if(bt == t && *s == *t)
        return 1;
    return 0;
}
