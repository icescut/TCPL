/**
 * 对输入的行排序，使用指针数组保存
 * gcc -o exe\chararrayqsort.exe chararrayqsort.c alloc.c getline.c
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
void qsort(char *v[], int l, int r);

int main(){
    int nlines;
    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("errer: too many input to sort\n");
        //printf("%d\n", nlines);
        return 1;
    }
}

int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while((len = getline(line, MAXLEN)) > 0) {
        //printf("nlines: %d, len: %d\n", nlines, len);

        if(nlines > MAXLINES || (p = alloc(len)) == NULL) {
            //printf("p = %x", p);
            return -1;
        } else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines){
    while(nlines-- >0)
        printf("%s\n", *lineptr++);
}

void qsort(char *v[], int left, int right){
    int i, last;
    void swap(char *v[], int i, int j);

    if(left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for(i = left +1; i <= right; ++i)
        if(strcmp(v[i], v[left]) < 0)
            swap(v, i, ++last);
    swap(v, left, last);
    qsort(v, left, last -1);
    qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j){
    char *temp;
    temp = v[i];
    v[i] = v [j];
    v[j] = temp;
}
