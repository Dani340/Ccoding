#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[75];
    const char s[2] = " ";
    char *astr, *bstr, *kstr;
    int i, x, k, j, a[50], b[50], res[100];

    FILE *fptr;

    if ((fptr = fopen("parola1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    kstr = strtok(S, s);
    k = atoi(kstr);

    fgets(S, 75, fptr);
    astr = strtok(S, s);

    bstr = strtok(NULL, s);

    for(i = 0; i < strlen(astr); i++) {
        a[i] = astr[i] - 48;
    }

    for(i = 0; i < strlen(bstr); i++) {
        b[i] = bstr[i] - 48;
    }

    for(i = 0; i < k; i++) { //primele k cifre ale primului nr.
        res[i] = a[i];
    }

    res[k] = b[strlen(bstr)-1]; //ultima cifra de la nr. 2

    i = k;
    x = k+1;
    j = strlen(bstr)-2;
    while(i < strlen(astr) && j >= 0) { //succesiune de cifre (una de la nr1, una de la nr2), pana cand se termina un nr.
        res[x] = a[i];
        res[x+1] = b[j];
        x = x+2;
        i++;
        j--;
    }

    while(i < strlen(astr)) { //daca primul nr mai are cifre, le punem in rezultat pe restul
        res[x] = a[i];
        x++;
        i++;
    }

    while(j >= 0) { //daca nr 2 mai are cifre, le punem in rezultat pe restul
        res[x] = b[j];
        x++;
        j--;
    }

    int count = x;
    for(x = 0; x < count; x++) {
        printf("%d", res[x]);
    }

}
