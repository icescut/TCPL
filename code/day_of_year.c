/**
 * 根据年月日转换为一年中的天数，或反之
 * gcc -o exe\day_of_year.exe day_of_year.c
 */
int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main(int argc, char const *argv[]) {
    int date;
    int month;
    int day;

    date = day_of_year(2016, 10, 2);
    printf("2016/10/2 is the %d date of year\n", date);
    month_day(2016, 150, &month, &day);
    printf("The 150th date of 2016 is month %d and day %d", month, day);
    return 0;
}

int day_of_year(int year, int month, int day){
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for(i = 1; i <= month; ++i)
        day += daytab[leap][i];
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday){
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for(i = 1; yearday > daytab[leap][i]; ++i)
        yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}
