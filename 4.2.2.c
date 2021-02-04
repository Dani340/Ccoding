#include <stdio.h>

int main()
{
    int A[100];
    int  N, i, X, count=0;

    printf("Enter the number of elements you want for the list: ");
    scanf(" %d", &N);

    printf("Enter X: ");
    scanf(" %d", &X);

    printf("Enter %d numbers \n", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if(X == A[i]) {
            count++;
        }
    }

    if(count == 0) {
        printf("False");
    }

    else {
        printf("True");
    }

    return 0;
}
