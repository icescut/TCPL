/**
 * 对输入的行排序，使用指针数组保存。可排序字符或数字，使用函数指针数学。
 * gcc -o exe\arrayqsort.exe arrayqsort.c numcmp.c alloc.c getline.c
 */
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];
int getline(char *, int);
char *alloc(int);
int readlines(char *p[], int max);
void writelines(char *p[], int lines);
void qsort(void *v[], int l, int r, int (*comp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char *argv[]){
    int nlines, numeric;
    numeric = 0;
    if(argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort((void **)lineptr, 0, nlines - 1,
            (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("errer: too many input to sort\n");
        return 1;
    }
}

int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while((len = getline(line, MAXLEN)) > 0)
        if(nlines > MAXLINES || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

void writelines(char *lineptr[], int nlines){
    while(nlines-- >0)
        printf("%s\n", *lineptr++);
}

void qsort(void *v[], int left, int right, int (*comp)(void *, void*)){
    int i, last;
    void swap(void *v[], int i, int j);

    if(left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for(i = left +1; i <= right; ++i)
        if((*comp)(v[i], v[left]) < 0)
            swap(v, i, ++last);
    swap(v, left, last);
    qsort(v, left, last -1, comp);
    qsort(v, last + 1, right, comp);
}

void swap(void *v[], int i, int j){
    void *temp;
    temp = v[i];
    v[i] = v [j];
    v[j] = temp;
}
