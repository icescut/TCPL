/**
 * 题目: 表达式x&=(x-1)可以删除x中最右边值为1的位，有何道理，重写bitcount
 * 答: x中最右边为1的位对应x-1的位必为0。相与后删除最右边的1
 */
int bitcount(unsigned x){
    int b = 0;
    while(x > 0){
        x &= x - 1;
        ++b;
    }
    return b;
}
