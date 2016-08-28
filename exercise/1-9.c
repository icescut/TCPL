/**
 * ��Ŀ�������븴�Ƶ�������������е���������ո���һ���ո����
 * ���룺gcc -o exe\1-9.exe 1-9.c
 */
#include <stdio.h>

#define IN   1
#define OUT  0

main() {
    int c, state = OUT;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t') {
            //��һ���ո��tab����ո����Ŀո��tab�����
            if(state == OUT) {
                putchar(' ');
                state = IN;
            }
        } else {
            putchar(c);
            state = OUT;
        }
    }
}
