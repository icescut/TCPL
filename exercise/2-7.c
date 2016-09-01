/**
 * 题目: invert(x, p, n)，把x第p位开始n位取反
 */
unsigned invert(unsigned x, int p, int n){
    unsigned mask = ~(~0 << n) << (p - n + 1); //00000001111100000
    return x ^ mask; //^1为取反，^0为取自身
}
