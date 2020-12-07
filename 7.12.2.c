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
                rest = num % 10;  
                sum += rest;      
                num = num / 10;  
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
