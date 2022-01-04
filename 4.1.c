#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 1, j = 0, u, r, aux, bool1[50], count[50], n, nr[50], max = -1;
    char *nstr, *xstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("secvmax.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 75, fptr);
    xstr = strtok(S, s);
    nr[0] = atoi(xstr);

    for(i = 1; i < n; i++) {
        xstr = strtok(NULL, s);
        nr[i] = atoi(xstr);
    }

    for(i = 0; i < n; i++) {
        u = nr[i] % 10;
        aux = nr[i];
        while(aux != 0) {
            r = aux % 10;
            aux = aux / 10;
        }
        if(r == u) {
            bool1[i] = 1;
        }
        else {
            bool1[i] = 0;
        }
    }

    for(i = 0; i < n; i++) {
        count[i] = 0;
        if(bool1[i] == 1) {
            j = i;
            while(bool1[j] == 1 && j < n) {
                count[i]++;
                j++;
            }
        }
        if(count[i] > max) {
            max = count[i];
        }
    }

    printf("%d", max);

    return 0;
}
