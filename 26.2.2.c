#include <stdio.h>

int main()
{
    int matrix[10][10];
    int matrix1[10][10];
    int i,j,r,left,right,up,down,upleft,upright,downright,downleft,Ma=0;

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
            left = 0;
            right = 0;
            up = 0;
            down = 0;
            upleft = 0;
            upright = 0;
            downright = 0;
            downleft = 0;
            if (i - 1 >= 0) {
                up = matrix[i-1][j];
            }
            if (i - 1 >= 0 && j - 1 >= 0) {
                upleft = matrix[i-1][j-1];
            }
            if (i - 1 >= 0 && j + 1 < r) {
                upright = matrix[i-1][j+1];
            }
            if (i + 1 < r && j - 1 >= 0) {
                downleft = matrix[i+1][j-1];
            }
            if (i + 1 < r && j + 1 < r) {
                downright = matrix[i+1][j+1];
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
            Ma = (left + right + up + down + upleft + upright + downleft + downright) / 9;
            matrix1[i][j] = Ma;
        }
    }
    printf("New matrix is: \n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
