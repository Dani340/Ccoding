#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i = 0, n, r, c, k, x = 0, aux, aux1, nr[50];
    char *nstr, *kstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cifre9.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    c = strlen(nstr);

    n = atoi(nstr);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    aux = c;
    c--;

    aux1 = n;
    while(aux1 != 0) {
        r = aux1 % 10;
        if(r == k) {
            x++;
        }
        aux1 = aux1 / 10;
    }

    while(n != 0) {
        r = n % 10;
        if(r == k) {
            nr[i] = r;
            i++;
        }
        else {
            nr[c] = r;
            c--;
        }
        n = n / 10;
    }

    for(i = 0; i < aux; i++) {
        printf("%d", nr[i]);
    }
    printf(" %d", x);

    return 0;
}
