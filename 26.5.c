#include <stdio.h>

int main() {
    int matrix[10][10];
    int sum = 0, biggest = 0;
    int i,j,m,n,M,N,K,J;

    printf("Enter number of rows: ");
    scanf("%d",&M);
    printf("Enter number of cols: ");
    scanf("%d",&N);
    printf("Enter the number of rows for submatrixes: ");
    scanf("%d",&K);
    printf("Enter number of cols for submatrixes: ");
    scanf("%d",&J);

    printf("\nEnter matrix elements:\n");
    for(i=0;i < M;i++)
    {
        for(j=0;j < N;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe big matrix is\n");
    for(i=0;i < M;i++)
    {
        for(j=0;j < N;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i <= M-K; i++) {
        for (j = 0; j <= N-J; j++) {
            sum = 0;
            for (m = i; m < K+i; m++) {
                for (n = j; n < J+j; n++) {
                    sum += matrix[m][n];
                }
            }
            if(sum > biggest) {
                biggest = sum;
            }
        }
    }

    printf("The biggest sum of the numbers from the submatrixes is: %d", biggest);

    return 0;
}
