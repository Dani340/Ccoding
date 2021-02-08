#include <stdio.h>

int main()
{
    int A[100], B[100], res[100];
    int N, M, i, j, count=0, x=0;

    printf("Enter the number of elements you want for list A: ");
    scanf(" %d", &N);

    printf("Enter the number of elements you want for list B: ");
    scanf(" %d", &M);

    printf("Enter %d numbers for list A \n", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter %d numbers for list B \n", M);

    for(i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            if(A[i] == B[j]) {
                res[x] = A[i];
                x++;
            }
        }
    }

    printf("The result is ");
    for (int l = 0; l < x; l ++) {
        printf("%d ", res[l]);
    }

    return 0;
}
