#include <stdio.h>
int main()
{
    int A, B, X;

    printf("Enter A: \n");
    scanf("%d", &A);

    printf("Enter B: \n");
    scanf("%d", &B);

    X = A;
    A = B;
    B = X;

    printf("A is %d and B is %d", A, B);

    return 0;
}
