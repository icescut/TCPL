/**
 * 题目: 使用函数实现温度转换
 */
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float ftoc(int f);

int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n");
    return 0;
}

float ftoc(int f){
    return (5.0 / 9.0) * (f - 32);
}
