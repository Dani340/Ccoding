#include <stdio.h>
int main()
{
    int n, k, i, p, sum=0;

    printf("Enter the initial length of the nose: \n");
    scanf("%d", &n);

    printf("Enter cm per work day: \n");
    scanf("%d", &p);

    printf("Enter days of measurement: \n");
    scanf("%d", &k);

    if(k % 7 != 6) {
        sum += n + (k / 7) * (5 * p - 2) + (k % 7) * p;
    }

    else {
        sum += n + (k / 7) * (5 * p - 2) + (5 * p - 1);
    }

    printf("His nose is now %d cm long", sum);

    return 0;
}
