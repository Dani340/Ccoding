#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i,j,r,c,sum=0;

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

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i + j == r - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of numbers on 2nd diag is %d ", sum);

    return 0;
}
