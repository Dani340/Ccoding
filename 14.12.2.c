#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, arr[50]={0}, c, x, max;
    FILE *fptr;

    if ((fptr = fopen("numere.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    for (c = 0; c < N; c++)
    {
        fscanf(fptr,"%d\n", &x);
        arr[c] = x;
    }

    for (c=0; c <= N; c++)
    {
        if (arr[c] > max) {
            max = arr[c];
        }
    }
	fclose(fptr);

	FILE * fout;
     if ((fout = fopen("max.out.txt", "w")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fprintf(fout,"%d\n",max);
    fclose(fout);

}
