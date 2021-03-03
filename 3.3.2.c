#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r;
    int **ptrMa, **ptrMb, **ptrMres;

    printf("Enter number of rows and cols:");
    scanf("%d",&r);

    ptrMa = (int **) malloc(r * sizeof(int *));

	for(i=0; i<r; i++)
	{
		ptrMa[i] = (int *) malloc(r * sizeof(int));
	}

    ptrMb = (int **) malloc(r * sizeof(int *));

	for(i=0; i<r; i++)
	{
		ptrMb[i] = (int *) malloc(r * sizeof(int));
	}

    ptrMres = (int **) malloc(r * sizeof(int *));

	for(i=0; i<r; i++)
	{
		ptrMres[i] = (int *) malloc(r * sizeof(int));
	}

    printf("\nEnter matrix A elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d", (*(ptrMa + i) + j));
        }
    }

    printf("\nEnter matrix B elements :\n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d", (*(ptrMb + i) + j));
        }
    }

    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            *(*(ptrMres + i) + j) = *(*(ptrMa + i) + j) + *(*(ptrMb + i) + j);
        }
    }

    printf("The A + B matrix is \n");
    for(i=0;i < r;i++)
    {
        for(j=0;j < r;j++)
        {
            printf("%d ", *(*(ptrMres + i) + j));
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
	{
		free(ptrMa[i]);
	}
    free(ptrMa);

    for(i=0; i<r; i++)
	{
		free(ptrMb[i]);
	}
    free(ptrMb);

    for(i=0; i<r; i++)
	{
		free(ptrMres[i]);
	}
    free(ptrMres);

    return 0;
}
