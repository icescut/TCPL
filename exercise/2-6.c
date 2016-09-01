/**
 * 题目: setbits(x, p n, y)，与getbits对应，设置为y最右边n位
 */
unsigned setbits(unsigned x, int p, int n, unsigned y){
    unsigned mask;
    mask = ~(~0 << n) << (p - n + 1);  //0000111100000
    x = x & ~mask;    //中间部分mask为0
    y = (y << (p - n + 1)) & mask;  //两边部分mask为0
    return x | y; //任何位| 0结果为本身
}
