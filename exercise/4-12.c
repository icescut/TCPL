/**
 * 题目：运用printd函数的设计思想编写一个递归版本的itoa函数。
 */
void itoa(int n, char s[]){
    static int i;
    if(n / 10) {
        itoa(n / 10, s);
    } else {
        i = 0;
        if(n < 0)
            s[i++] = '-';
    }
    s[i++] = abs(n) % 10 + '0';
    s[i] = '\0';
}
