/**
 * 题目: 尽量将空格转换为最少的tab和空格
 */
#include <stdio.h>
#define TABLEN 8

int main(){
    int c, nb = 0, nt = 0, pos;
    while((c = getchar() != EOF) {
        switch(c) {
        case ' ' :
            ++pos;
            if(pos % TABLEN == 0) {
                ++nt;
                nb = 0;
            } else {
                ++nb;
            }
            break;
        case '\t' :
            ++nt;
            nb = 0;
            pos += TABLEN - pos % TABLEN;
            break;
        default:
            while(nt > 0) {
                putchar('\t');
                --nt;
            }
            while(nb > 0) {
                putchar(' ');
                --nb;
            }
            ++pos;
            putchar(c);
            if(c == '\n') {
                pos = 0;
            }
            break;
        }
    }
return 0;
}
