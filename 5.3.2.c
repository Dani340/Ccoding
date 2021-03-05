#include <stdio.h>
#include <stdlib.h>

void getfirstEven(int * num, int N, int * even, int * pos)
{
    int i;

    for (i = 0; i < N; i++)
    {
        if(num[i] % 2 == 0)
        {
            *even = num[i];
            *pos = i;
            break;
        }
    }
}

int main()
{
    int num[100], N, i;

    int even, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter %d elements \n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", (num + i));
    }

    getfirstEven(num, N, &even, &pos);

    printf("The first even number is %d \n", even);
    printf("The position of the first even number is %d \n", pos);

    return 0;
}

