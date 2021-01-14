#include <stdio.h>
#include <stdlib.h>
int main() {
    float N, arr[50]={}, c, x, y, sum=0.0;
    FILE *fptr;

    if ((fptr = fopen("media.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    for (c = 0; c < N; c++)
    {
        fscanf(fptr,"%d\n", &x);
        sum += x;
    }

    sum = sum / 4 * 3;

    fscanf(fptr, "%d\n", &y);
    sum = (sum + y) / 4;


	fclose(fptr);

	FILE * fout;
     if ((fout = fopen("media.out.txt", "w")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fprintf(fout,"%d\n",sum);
    fclose(fout);

}
