/**
 * 统计x中为1的二进制位的个数
 */
int bitcount(unsigned x){
    int b;
    for(b = 0; x != 1; x >> 1)
        if(x & 1)
            b++;
    return b;
}
