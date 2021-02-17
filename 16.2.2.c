#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i,j,r,c,x,y,count;

    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of cols:");
    scanf("%d",&c);
    printf("Enter the x col:");
    scanf("%d",&x);
    printf("Enter the y col:");
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

    for(i = 0; i < r; i ++) {
        count = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = count;
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
