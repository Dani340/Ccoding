#include <stdio.h>

void main()
{
    int numbers[100], i, j, n;

    printf("Enter 4 numbers in the array :\n");

    for(i=0; i<4; i++)
    {
        scanf("%d",&numbers[i]);
    }

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(numbers[j] < numbers[i])
            {
                n = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = n;
            }
        }
    }

    printf("The numbers sorted in ascending order are:\n");

    for(i=0; i<4; i++)
    {
        printf("%d \n", numbers[i]);
    }

    return 0;
}
