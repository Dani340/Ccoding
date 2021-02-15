#include <stdio.h>

int main()
{
    int matrix[10][10];
    int i,j,r,c,x,y,i0;

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

    printf("\nMatrix is :\n");
    for(i=0;i < r;i++)
    {
        i0 = i;
        if(i0 == x) {
            i = y;
        }
        else if(i0 == y) {
            i = x;
        }
        for(j=0;j < c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        i = i0;
        printf("\n");
    }
    return 0;
}
