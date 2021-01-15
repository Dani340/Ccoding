#include <stdio.h>
int main()
{
    int n, j, i, sum=0, sum1=1;

    printf("Enter your number: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum1 = sum1 * i;
        sum += sum1;
    }

    printf("The sum is %d", sum);

    return 0;
}
