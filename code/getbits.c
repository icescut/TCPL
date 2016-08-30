/**
 * 返回x中从右边数第p位开始向右n位的段
 * 任何数&0结果为0,任何数&1结果为自身
 */
unsigned getbits(unsigned x, int p, int n){
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
