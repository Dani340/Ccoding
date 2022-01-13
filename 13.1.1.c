#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i = 0, n, k, c, ic = 0, auxc, r, aux, sum = 0, sumc = 0, max = -1;
    int sir[75], csir[150];
    char *kstr, *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("sir9i.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    fgets(S, 75, fptr);
    sirstr = strtok(S, s);
    c = strlen(sirstr);
    ic += c;
    sir[0] = atoi(sirstr);
    aux = sir[0];
    auxc = ic;

    while(aux != 0) {
        r = aux % 10;
        csir[auxc-1] = r;
        auxc--;
        aux = aux / 10;
    }

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        c = strlen(sirstr);
        ic += c;
        sir[i] = atoi(sirstr);
        aux = sir[i];

        auxc = ic;
        while(aux != 0) {
            r = aux % 10;
            csir[auxc-1] = r;
            auxc--;
            aux = aux / 10;
        }
    }

    for(i = 0; i < n; i++) {
        sum = 0;
        if(i < n-2) {
            sum = sir[i] + sir[i+1] + sir[i+2];
        }
        if(sum > max) {
            max = sum;
        }
    }

    for(i = 0; i < k; i++) {
        sumc += csir[i];
    }

    printf("%d\n%d", max, sumc);

    return 0;
}
