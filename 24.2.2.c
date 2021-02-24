#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i,j,r,left,right,up,down;

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

    for (i=0; i < r; i ++) {
        for (j = 0 ; j < r; j ++) {
            left = -1;
            right = -1;
            up = -1;
            down = -1;
            if (i - 1 >= 0) {
                up = matrix[i-1][j];
            }
            if (i + 1 < r) {
                down = matrix[i+1][j];
            }
            if (j - 1 >= 0) {
                left = matrix[i][j-1];
            }
            if(j + 1 < r) {
                right = matrix[i][j+1];
            }
            if(matrix[i][j] > down && matrix[i][j] > up && matrix[i][j] > left && matrix[i][j] > right) {
                printf("[%d, %d]  ", i+1, j+1);
            }
        }
    }

    return 0;
}
