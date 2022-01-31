#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i, j, n, r = 0, ka, kb, auxn1, auxn2, nra, nrb;
    char *kbstr, *kastr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("vanatoare.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 5, fptr);
    kastr = strtok(S, s);
    ka = atoi(kastr);

    fgets(S, 5, fptr);
    kbstr = strtok(S, s);
    kb = atoi(kbstr);

    n = 1;
    auxn2 = 1;
    auxn1 = 0;
    while(ka >= 0 && kb >= 0) {
        r++;
        nra = 0;
        nrb = 0;
        for(i = 0; i < n; i++) {
            if(i % 2 == 0) {
                ka--;
                nra++;
            }
            else {
                kb--;
                nrb++;
            }
        }

        auxn1 = n;
        n = auxn2 + auxn1;
        auxn2 = auxn1;

    }

    printf("%d\n%d\n%d", r-1, ka+nra, kb+nrb);

    return 0;
}
