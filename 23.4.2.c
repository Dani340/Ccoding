#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[10][10];
    int i, j, r, c;

    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of cols: ");
    scanf("%d",&c);

    printf("\nEnter matrix elements\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe new matrix is\n");
    for(i = 0; j < r; i++) {
        if(i % 2 == 1) {
            for(j = 0; j < c; j++) {
                printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }

        else {
            for(j = c-1; j >= 0; j--) {
                printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
