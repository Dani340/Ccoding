#include <stdio.h>

int main()
{
    char matrix[10][10];
    int x,i,j,r,count;

    printf("Enter number of rows and cols:");
    scanf("%d",&r);

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf(" %c",&matrix[i][j]);
        }
    }

    for(x = r-1; x >= 0; x--) {
        j = 0;
        i = x;
        while(i < r) {
            printf("%c", matrix[i][j]);
            i++;
            j++;
        }
    }

    for(x = 1; x < r; x++) {
        j = x;
        i = 0;
        while(j < r) {
            printf("%c", matrix[i][j]);
            i++;
            j++;
        }
    }

    printf("\n");

    for(x = 0; x < r; x++) {
        j = x;
        i = 0;
        while(j >= 0) {
            printf("%c", matrix[i][j]);
            j--;
            i++;
        }
    }

    for(x = 1; x < r; x++) {
        i = x;
        j = r-1;
        while(i < r) {
            printf("%c", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}

//https://www.studymite.com/blog/strings-in-c#read_using_getline//