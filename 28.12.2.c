#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[75];
    const char s[2] = " ";
    char *sirstr, *nstr;
    int max, i, n, x, aux, sir[100], cod[50], p;

    FILE *fptr;

    if ((fptr = fopen("seif2.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 75, fptr);

    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);
    i = 1;

    while(sirstr != NULL) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
        i++;
    }

    x = 0;
    for(i = 0; i < n; i++) {
        p = 1;

        cod[x] = sir[i];
        aux = sir[i+1];
        while(aux != 0) {
            p *= 10;
            aux = aux / 10;
        }
        cod[x] = cod[x] * p + sir[i+1];
        x++;
    }

    max = cod[0];
    for(i = 0; i < x; i++) {
        if(cod[i] > max) {
            max = cod[i];
        }
    }

    printf("%d", max);

    return 0;
}
