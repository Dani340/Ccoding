#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i, j, r, c, m, n, count, biggestm = -1, lowestm = 99, biggestn = -1, lowestn = 99;

    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of cols:");
    scanf("%d",&c);

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The sa elements are: ");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            for(m = 0; m < r; m++) {
                if(matrix[m][j] > biggestm) {
                    biggestm = matrix[m][j];
                }
                else if(matrix[m][j] < lowestm) {
                    lowestm = matrix[m][j];
                }
            }

            for(n = 0; n < c; n++) {
                if(matrix[i][n] > biggestn) {
                    biggestn = matrix[i][n];
                }
                else if(matrix[i][n]) {
                    lowestn = matrix[i][n];
                }
            }
            if(matrix[i][j] == biggestm && matrix[i][j] == lowestn || matrix[i][j] == lowestm && matrix[i][j] == biggestn) {
                printf("%d ", matrix[i][j]);
                count++;
            }
        }
    }
    printf("\nThere are %d sa elements", count);

    printf("\nMatrix is :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
