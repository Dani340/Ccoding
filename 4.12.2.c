#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    FILE *fptr;

    if ((fptr = fopen("adunare.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &a);
    fscanf(fptr, "%d\n", &b);
	fclose(fptr);

    FILE * fout;
     if ((fout = fopen("adunare.out.txt", "w")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fprintf(fout,"%d\n",a + b);
    fclose(fout);
}
