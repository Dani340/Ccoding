#include <stdio.h>
#include <stdlib.h>
int main() {

    struct product {
        char name[10];
        int count;
        float cost;
    };

    struct product Product[10];
    int N, c;
    float sum = 0.0;

    FILE *fptr;

    if ((fptr = fopen("structure.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    for (c = 0; c < N; c++)
    {
        fscanf(fptr,"%s\n", Product[c].name);
        fscanf(fptr,"%d\n", &Product[c].count);
        fscanf(fptr,"%f\n", &Product[c].cost);
        sum += Product[c].count * Product[c].cost;
    }

	fclose(fptr);

    printf("The total cost of the products is %f", sum);

    return 0;
}
