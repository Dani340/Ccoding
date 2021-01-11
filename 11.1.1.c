#include<stdio.h>

int main()
{
    int N, sum=0;

    printf("Enter a number:");
    scanf("%d", &N);

    sum = 5 + (N - 1) * 5;

    printf("The no. of heads is %d \n", sum);
    return 0;
}
