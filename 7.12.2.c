#include<stdio.h> // include stdio.h

int main()
{
    int num, sum = 0, rest;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(num / 10 != 0)
    {
        while(num / 10 != 0)
        {
            sum = 0;
            while(num != 0)
            {
                rest = num % 10;  // get the last digit of num
                sum += rest;      // add rem to sum
                num = num / 10;  // remove the last digit from num
            }

            num = sum;
        }
    }

    else
    {
    sum = num;
    }

    printf("%d", sum);

    return 0;
}
