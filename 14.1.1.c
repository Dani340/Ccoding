#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, n, x, j, u, auxn1, auxn2;
    char sir[100][20];
    char *nstr, *sirstr;
    char S[200];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("codificare.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 200, fptr);
    sirstr = strtok(S, s);

    x = 0;
    auxn1 = 0;
    auxn2 = n;
    for(i = 0; i < strlen(sirstr) / n; i++) {
        j = 0;
        if(x % 2 == 0) {
            for(u = auxn1; u < auxn2; u++) {
                sir[i][j] = sirstr[u];
                j++;
            }
        }
        else {
            for(u = auxn2-1; u >= auxn1; u--) {
                sir[i][j] = sirstr[u];
                j++;
            }
        }
        auxn1 += n;
        auxn2 += n;
        x++;
    }

    for(j = 0; j < n; j++) {
        for(i = 0; i < strlen(sirstr) / n; i++) {
            printf("%c", sir[i][j]);
        }
    }

    return 0;
}
