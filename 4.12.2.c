#include <stdio.h>
#include <stdlib.h>
int main() {
    int aInt, bInt,sum=0;
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("adunare.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", c);
	aInt = atoi(c);
    fscanf(fptr, "%[^\n]", c);
	bInt = atoi(c);
	sum = aInt + bInt;
	fclose(fptr);

    FILE * fout;
     if ((fout = fopen("adunare.out.txt", "w")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fprintf(fout,"%d\n",sum);
    fclose(fout);
}
