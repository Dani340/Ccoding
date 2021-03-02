#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    ptr = (int*) malloc(N * sizeof(int));

    printf("Enter elements \n");
    for(i = 0; i < N; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum of the elements is %d", sum);

    free(ptr);

    return 0;
}
