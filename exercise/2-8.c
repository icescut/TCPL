/**
 * 题目: rightrot(x, n)，x循环右移n位，依次从左边移入
 */
unsigned countbits(){
    unsigned x = ~0;
    int i = 0;
    while(x != 0){
        x >>= 1;
        ++i;
    }
    return i;
}

unsigned rightrot(unsigned x, int n){
    return (x << (countbits() - n)) | (x >> n); //右部分左移，左部分右移
}
