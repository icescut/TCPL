/**
 * 求点到原点间距离
 * 编译：gcc
 */
#include <math.h>
#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main(){
    struct Point pt = {3.0, 4.0};
    double dist;
    dist = sqrt(pt.x * pt.x + pt.y * pt.y);
    printf("%g\n", dist);
    return 0;
}
