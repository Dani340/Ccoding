#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tr[50];
    int i, N, S;

    FILE *fptr;

    if ((fptr = fopen("bancomat.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &S);
    fscanf(fptr, "%d\n", &N);

    for (i = 0; i < N; i++) {
        fscanf(fptr,"%d\n", &tr[i]);
        if(tr[i] % 10 == 2) {
            tr[i] = tr[i] / 10;
            S += tr[i];
        }
        else if(tr[i] % 10 == 3 && (tr[i] / 10) <= S) {
            tr[i] = tr[i] / 10;
            S -= tr[i];
        }
        else {
            printf("One or more of the transaction codes do not end in either 2 or 3!");
            return 0;
        }
    }
    printf("The sum is: %d", S);

    return 0;
}
