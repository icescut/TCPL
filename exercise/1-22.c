/**
 * 题目: 把较长的行折成短一些的行，折行位置在第n列之前最后一个非空字符。
*/
#include <stdio.h>

#define MAXCOL 10
#define TABLEN 8

char line[MAXCOL]

void printline(int);
int findblank(int);
int newpos(int);

int main(){
    int c, pos = 0;
    while((c = getchar()) != EOF) {
        switch(c) {
        case '\t' :
            if(pos < TABLEN) {
                while(pos < TABLEN) {
                    line[pos++] = ' ';
                }
            } else {
                printline(pos);
                pos = 0;
            }
            break;
        case '\n' :
            printline(pos);
            pos = 0;
            break;
        case ' ' :
            line[pos++] = c;
            if(pos >= MAXCOL){
                printline(pos);
                pos = 0;
            }
            break;
        default:
            line[pos++] = c;
            if(pos >= MAXCOL) {
                pos = findblank(pos);
                printline(pos);
                pos = newpos(pos);
            }
            break;
        }
    }
}

void printline(int pos) {
    int i;
    for(i = 0; i < pos; ++i) {
        putchar(line[i]);
    }
    //好像没有不大于0的情况
    if(pos > 0) {
         putchar('\n');
    }
}

int findblank(int pos) {
    while(pos > 0 && line[pos--] != ' ')
        ;
    if(pos == 0) {
        return MAXCOL;
    }
    //返回空格后第一个非空字符
    return pos + 1;
}

int newpos(int pos) {
    int i, j;
    if(pos <= 0 || pos >= MAXCOL) {
        return 0;
    } else {
        i = 0;
        j = pos;
        while(j <MAXCOL) {
            line[i++] = line[j++];
        }
        return i;
    }
}
