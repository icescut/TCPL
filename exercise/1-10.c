/**
 * ��Ŀ�������븴�Ƶ�������������е��Ʊ���滻Ϊ\t���ѻ��˷��滻Ϊ\b���ѷ�б���滻Ϊ\\
 * ���룺gcc -o exe\1-10.exe 1-10.c
 */
#include <stdio.h>

main() {
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            printf("\\t");
        } else if(c == '\b') {
            printf("\\b");
        } else if(c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
