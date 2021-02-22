#include <stdio.h>

int main()
{
    int matrix[10][10], biggestall[10];
    int i,j,r,biggest=-1;

    printf("Enter number of rows and cols:");
    scanf("%d",&r);

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] > biggest) {
                biggest = matrix[i][j];
            }
        }
        biggestall[i] = biggest;
    }

    for(i = 0; i < r; i++) {
        printf("%d ", biggestall[i]);
    }

    return 0;
}
