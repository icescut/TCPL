/**
 * ��Ŀ������ת���ϣ����������
 * ���룺gcc -o exe\1-5.exe 1-5.c
 */
#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

main() {
    int fahr;

    printf("����ת��Ϊ����\n");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
