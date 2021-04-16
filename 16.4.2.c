#include <stdio.h>

int main() {
    int matrix[10][10];
    int i,j,m,n,N,K;

    printf("Enter number of rows and cols: ");
    scanf("%d",&N);
    printf("Enter the number of rows and cols for submatrixes: ");
    scanf("%d",&K);

    printf("\nEnter matrix elements:\n");
    for(i=0;i < N;i++)
    {
        for(j=0;j < N;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe big matrix is\n");
    for(i=0;i < N;i++)
    {
        for(j=0;j < N;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nAll of the submatrixes are\n");
    for (i = 0; i <= N-K; i++) {
        for (j = 0; j <= N-K; j++) {
            for (m = i; m < K+i; m++) {
                for (n = j; n < K+j; n++) {
                    printf("%d\t", matrix[m][n]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }



    return 0;
}
