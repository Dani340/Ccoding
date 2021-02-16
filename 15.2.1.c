#include <stdio.h>

int main()
{
    int matrix[10][10], matrix1[10][10];
    int i,j,r,c,x,y;

    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of cols:");
    scanf("%d",&c);
    printf("Enter the x row:");
    scanf("%d",&x);
    printf("Enter the y row:");
    scanf("%d",&y);


    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(j = 0; j < c; j ++) {
        matrix1[0][1] = matrix[x][j];
        matrix[x][j] = matrix[y][j];
        matrix[y][j] = matrix1[0][1];
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
