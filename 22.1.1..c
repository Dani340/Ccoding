#include <stdio.h>

int main()
{
    int x, i, p, n, k, count=0;

    printf("Enter the amount of numbers you want in the list: ");
    scanf("%d", &n);
    printf("Enter the number you want to divide with: ");
    scanf("%d", &p);
    printf("Enter the rest: ");
    scanf("%d", &k);
    printf("Enter %d numbers:\n", n);

    for(i=0; i < n; i++)
    {
        scanf("%d",&x);
        if(x % p == k) {
            count++;
        }
    }

    printf("There are %d numbers that if divided by %d, the rest will be %d", count, p, k);

    return 0;
}
