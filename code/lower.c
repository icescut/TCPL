/**
 * 将字符c转换为相应的小写形式
 */
int lower(int c){
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}
