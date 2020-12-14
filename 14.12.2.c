#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, arr[50]={0}, c;
    FILE *fptr;

    if ((fptr = fopen("numere.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    for (c = 0; c <= N; c++)
    {
    fscanf(fptr,"%d\n", &arr[c]);
    arr[c] += arr[c];
    }
	fclose(fptr);
	printf("The list is %d", arr[50]);

}
