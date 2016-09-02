/**
 * 转换整数为字符串
 */
void itos(int n, char s[]){
    int i, sign;
    if((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = (n % 10) + '0';
    } while((n /= 10) > 0);
    s[i] = '\0';
    reverse(s);
}
