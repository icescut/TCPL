/**
 * 题目: itob(n, s, b),转换整数为b进制,b只能为2-36位
 */
void itos(int n, char s[], int b){
    int i, sign, temp;

    i = 0;
    do {
        temp = n % b;
        temp = (temp > 0) ? temp : -temp;
        s[i++] = (temp > 9) ? temp - 10 + 'a' : -temp + '0';
    } while((n /= b) != 0);
    s[i] = '\0';
    reverse(s);
}
