#include <stdio.h>

int main()
{
    int A[100], B[100], res[100];
    int N, M, i, j, k, l, x=0;

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

    for(j = 0; j < M; j++)
    {
        scanf("%d", &B[j]);
    }

    i = 0, j = 0;
    while(i < N && j < M) {
        if(A[i] < B[j]) {
            res[x] = A[i];
            x++;
            i++;
        }
        else {
            res[x] = B[j];
            x++;
            j++;
        }
    }

    if(i <= N) {
        for(k = i; k < N; k++) {
            res[x] = A[k];
            x++;
        }
    }

    if(j <= M) {
        for(k = j; k < M; k++) {
            res[x] = B[k];
            x++;
        }
    }

    printf("The result is ");
    for (l = 0; l < x; l++) {
        printf("%d", res[l]);
    }

    return 0;
}
