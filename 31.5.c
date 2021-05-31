#include <stdio.h>

int main()
{
    int i, n, y, w , d;

    printf("Enter the number of days to be converted in years, weeks and days: ");
    scanf("%d",&n);

    d = (n % 365) % 7;
    w = (n % 365) / 7;
    y = n / 365;

    printf("The number you entered converted in years, weeks and days is: ");
    if(y != 0) {
        printf("%d year(s) ", y);
    }
    if(w != 0) {
        printf("%d week(s) ", w);
    }
    if(d != 0) {
        printf("%d day(s)", d);
    }

    return 0;
}
