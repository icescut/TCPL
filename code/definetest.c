#include <stdio.h>

#define dprint(expr) printf(#expr " = %g\n", expr)
#define paste(front, back) front ## back

int main(){
    double d = 1.2;
    int name1 = 5;
    dprint(d);
    printf("%d\n", paste(name, 1));
}
