#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r, sum=0, mem;
    int **ptr;

    printf("Enter number of rows and cols:");
    scanf("%d",&r);

    ptr = (int **) malloc(r * sizeof(int *));

	for(i=0; i<r; i++)
	{
		ptr[i] = (int *) malloc(r * sizeof(int));
	}

    printf("\nEnter matrix elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d", (*(ptr + i) + j));
            sum += *(*(ptr + i) + j);
        }
    }

    printf("The sum of the elements is %d", sum);

    for(i=0; i<r; i++)
	{
		free(ptr[i]);
	}
    free(ptr);

    return 0;
}
