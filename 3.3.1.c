#include <stdio.h>

int main()
{
    int *ptra, *ptrb, *ptrres;
    int N, M, i, j, k, l, x=0;

    printf("Enter the number of elements you want for list A: ");
    scanf(" %d", &N);

    printf("Enter the number of elements you want for list B: ");
    scanf(" %d", &M);

    ptra = (int*) malloc(N * sizeof(int));
    ptrb = (int*) malloc(M * sizeof(int));
    ptrres = (int*) malloc((N+M) * sizeof(int));

    printf("Enter %d numbers for list A \n", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", ptra + i);
    }

    printf("Enter %d numbers for list B \n", M);

    for(j = 0; j < M; j++)
    {
        scanf("%d", ptrb + j);
    }

    i = 0, j = 0;
    while(i < N && j < M)
    {
        if(ptra[i] < ptrb[j])
        {
            ptrres[x] = ptra[i];
            x++;
            i++;
        }
        else
        {
            ptrres[x] = ptrb[j];
            x++;
            j++;
        }
    }

    if(i <= N)
    {
        for(k = i; k < N; k++)
        {
            ptrres[x] = ptra[k];
            x++;
        }
    }

    if(j <= M)
    {
        for(k = j; k < M; k++)
        {
            ptrres[x] = ptrb[k];
            x++;
        }
    }

    printf("The result is ");
    for (l = 0; l < x; l++)
    {
        printf("%d ", ptrres[l]);
    }

    free(ptra);
    free(ptrb);
    free(ptrres);

    return 0;
}
