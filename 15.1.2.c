#include <stdio.h>
int main()
{
    int A, B, X, Y;

    printf("Enter A: \n");
    scanf("%d", &A);

    printf("Enter B: \n");
    scanf("%d", &B);

    X = A;
    Y = B;
    B = X;
    A = Y;

    printf("A is %d and B is %d", A, B);

    return 0;
}
