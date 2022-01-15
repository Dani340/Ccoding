#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, u, n, x, j, t, sum = 0;
    char *nstr, *tstr, *xstr;
    char S[200];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("marcel.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    i = 0;
    j = 0;
    for(u = 0; u < n; u++) {
        fgets(S, 10, fptr);
        tstr = strtok(S, s);
        t = atoi(nstr);

        xstr = strtok(NULL, s);
        x = atoi(xstr);

        if(t == 0) {
            j += x;
        }
        else {
            i += x;
        }

        if((i + j) % 2 == 0) {
            sum += i+j+2;
        }
        else {
            sum -= i+j+2;
        }
    }

    printf("%d", sum);

    return 0;
}
