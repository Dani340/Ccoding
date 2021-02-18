#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i,j,r,sum=0;

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

    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (i < j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of numbers on top of 1st diag is %d ", sum);

    return 0;
}
