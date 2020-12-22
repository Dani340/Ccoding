#include<stdio.h>

int main()
{
    int i, N, sum=0, product;

    printf("Enter a number:");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
    product = i * i;
    sum += product;
    }

    printf("The sum is %d \n", sum);
    return 0;
}
