/**
 * ��Ŀ����дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���
 * ���룺gcc -o exe\1-8.exe 1-8.c
 */
#include <stdio.h>

main() {
    int c;
    //�ո����
    int nc;
    //�Ʊ������
    int nt;
    //���з�����
    int nl;

    nc = nt = nl = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ')
            nc++;
        if(c == '\t')
            nt++;
        if(c == '\n')
            nl++;
    }
    printf("%d %d %d\n", nc, nt, nl);
}
