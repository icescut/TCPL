#include <stdio.h>

int main() {
    int day, month, year;
    char *monthname;
    char line[1000];

    monthname = malloc(10, 0);
    while(getline(line, sizeof(line)) > 0) {
        if(sscanf(line, "%d %s %d", &day, monthname, &year) == 3)
            printf("valid: %s", line);
        else if(sscanf(line, "%d/%d/%d", &month, &day, &year) == 3)
            printf("valid: %s, line);
        else
            printf("invalid: %s, line);
    }
    free(monthname);
    monthname = NULL;
    return 0;
}
