/**
 * 题目: itoa无法转换最小整数，如何解决
 */
void itos(int n, char s[]){
    int i, sign, temp;
 
    i = 0;
    do {
        temp = n % 10;
        s[i++] = (temp > 0) ? temp : -temp + '0';
    } while((n /= 10) != 0);
    s[i] = '\0';
    reverse(s);
}
