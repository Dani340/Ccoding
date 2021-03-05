#include <stdio.h>
#include <stdlib.h>

int * getfirstEvenNumber(const int N, int even[])
{
    int i;
    int * result;
    result = (int*) malloc(2 * sizeof(int));

    for (i = 0; i < N; i++)
    {
        if(even[i] % 2 == 0)
        {
            *(result) = even[i];
            *(result + 1) = i;
            break;
        }
    }

    return result;
}


int main()
{
    int evenNumber[100];
    int * totalresult;
    int i, N;

    totalresult = (int*) malloc(2 * sizeof(int));

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter %d numbers \n", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &evenNumber[i]);
    }

    totalresult = getfirstEvenNumber(N, evenNumber);

    printf("The first even number is %d \n", *(totalresult));
    printf("The position of the first even number is %d \n", *(totalresult + 1));

    return 0;
}

