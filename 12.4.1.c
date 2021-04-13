#include <stdio.h>
#include <time.h>

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("The date of today is %d %d %d and the hour at the moment is %02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour);
}
