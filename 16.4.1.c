#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i, j, r, c, m, n, K, count;

    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of cols:");
    scanf("%d",&c);

    printf("Enter a row where the numbers will be ordered: ");
    scanf("%d", &K);

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        if(i == K) {
            for(j = 0; j < c; j++) {
                for(m = j+1; m < c; m++) {
                    if(matrix[i][j] > matrix[i][m]) {
                        for(n = 0; n < r; n++) {
                            count = matrix[n][j];
                            matrix[n][j] = matrix[n][m];
                            matrix[n][m] = count;
                        }
                    }
                }
            }
        }
    }

    printf("\nMatrix is :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
