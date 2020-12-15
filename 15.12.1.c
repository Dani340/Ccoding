#include <stdio.h>

int main()
{
    int x, y, i, total=0;

    printf("What would you like the first number of the interval to be? \n");
    scanf("%d", &x);

    printf("What would you like the last number of the interval to be? \n");
    scanf("%d", &y);

    for (i = x; i <= y; i++)
        if (i % 6 == 0 && i % 4 != 0) {
            total++;
        }

    printf("There are %d numbers divisible to 6, but not 4 in the [%d, %d] interval", total, x, y);
}
