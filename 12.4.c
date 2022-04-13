#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, x, num, p[100], cif[100], aux, k, n;
    bool bool1 = false;
    char *nstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("sir5.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 5, fptr);
    kstr = strtok(S, s);
    k = atoi(kstr);

    i = 0;
    num = k * k;
    num /= 10;
    n = num % 100;
    p[0] = n;

    while(bool1 == false) {
        num = p[i] * p[i];
        num /= 10;
        n = num % 100;
        p[++i] = n;

        for(j = 0; j < i; j++) {
            if(p[i] == p[j]) {
                bool1 = true;
            }
        }
    }

    for(j = 0; j < i; j++) {
        printf("%d ", p[j]);
        aux = p[j];
        while(aux >= 10) {
            aux /= 10;
        }
        cif[j] = aux % 10;
    }
    printf("\n");
    for(j = 0; j < i; j++) {
        for(x = j+1; x < i; x++) {
            if(cif[j] > cif[x]) {
                aux = cif[x];
                cif[x] = cif[j];
                cif[j] = aux;

                aux = p[x];
                p[x] = p[j];
                p[j] = aux;
            }
        }
    }

    for(j = 0; j < i; j++) {
        printf("%d ", p[j]);
    }

    return 0;
}
