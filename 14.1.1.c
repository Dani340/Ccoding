#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, c;
    float x, y, sum=0;
    FILE *fptr;

    if ((fptr = fopen("media.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    for (c = 0; c < N; c++)
    {
        fscanf(fptr,"%f\n", &x);
        sum += x;
    }

    sum = sum / 4.0 * 3.0;

    fscanf(fptr, "%f\n", &y);
    sum = (sum + y) / 4.0;


	fclose(fptr);

	FILE * fout;
     if ((fout = fopen("media.out.txt", "w")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fprintf(fout,"%f\n",sum);
    fclose(fout);

}
