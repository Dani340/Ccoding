#include <stdio.h>

int main()
{
    int matrix[10][10], lowestall[10];
    int i,j,r,lowest;

    printf("Enter number of rows and cols:");
    scanf("%d",&r);

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i < r;i++)
    {
        lowest = matrix[i][0];
        for(j=0;j < r;j++)
        {
            if(matrix[i][j] < lowest) {
                lowest = matrix[i][j];
            }
        }
        lowestall[i] = lowest;
    }

    for(i = 0; i < r; i++) {
        printf("%d ", lowestall[i]);
    }

    return 0;
}
