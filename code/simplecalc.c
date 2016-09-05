#include <stdio.h>

#define MAXLINE 100

int main(){
    double sum, atof(char []);
    char line[MAXLINE];
    int getline(char [], int);

    while(getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
