#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 0, j = 0, a[50], b[50], c[50], t[i], n, x, y;
    int lowest, lowesti;
    char *nstr, *xstr, *ystr, *astr, *bstr, *cstr;
    char S[75], dir[50];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cursaf1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    xstr = strtok(NULL, s);
    x = atoi(xstr);

    ystr = strtok(NULL, s);
    y = atoi(ystr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        astr = strtok(S, s);
        a[i] = atoi(astr);

        bstr = strtok(NULL, s);
        b[i] = atoi(bstr);

        cstr = strtok(NULL, s);
        c[i] = atoi(cstr);

        t[i] = a[i] * x + b[i] * c[i] + b[i] * 2 * y;

        if(i == 0) {
            lowest = t[i];
            lowesti = i;
        }
        else {
            if(t[i] < lowest) {
                lowest = t[i];
                lowesti = i;
            }
        }
    }

    printf("%d %d", lowesti+1, lowest);

    return 0;
}

