#include <stdio.h>

int getline(char *s, int max) {
    if(fgets(s, max, stdin) == NULL)
        return 0;
    else
        return strlen(s);
}
