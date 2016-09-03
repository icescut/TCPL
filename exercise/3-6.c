/**
 * 题目: 修改itoa，使用接收三个参数，第三个参数为最小宽度
 */
void itos(int n, char s[], unsigned w){
    int i, sign, temp;

    i = 0;
    do {
        temp = n % 10;
        s[i++] = (temp > 0) ? temp : -temp + '0';
    } while((n /= 10) != 0);

    while(i <= w)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}
