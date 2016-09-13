/**
 * 题目: 用指针方式实现strcat
 */
void strcat(char *s, char *t) {
    //while(*s++) 注意:s将指向\0后面一位
      //  ;
    while(*s)
        s++;
    while(*s++ = *t++)
        ;
}
