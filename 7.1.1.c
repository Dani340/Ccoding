#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i = 0, j = 0, n, suma[37], max = -1, maxi, y = 0;
    int sir[75];
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("simetrie.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 75, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
    }

    for(i = 0; i < n/2; i++) {
        suma[i] = sir[i] + sir[n-1-i];
        if(suma[i] > max) {
            max = suma[i];
            maxi = i;
            y = 0;
        }
        else if(suma[i] == max) {
            y++;
        }
    }

    if(y > 0) {
        for(i = 0; i < n/2; i++) {
            if(suma[i] == max) {
                printf("%d %d\n", sir[i], sir[n-1-i]);
            }
        }
    }
    else {
        printf("%d %d", sir[maxi], sir[n-1-maxi]);
    }

    return 0;
}
