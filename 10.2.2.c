#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, j, n, x, y, nr1, nr2;
    char *nstr, *xstr, *ystr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("crioac.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 100, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    xstr = strtok(NULL, s);
    x = atoi(xstr);

    ystr = strtok(NULL, s);
    y = atoi(ystr);

    nr1 = n/x+1;
    nr2 = n/y+1;

    printf("%d\n", min(nr1, nr2));

    j = n-y;
    for(i = x-1; i < n; i += x) {
        if(i == j) {
            printf("%d", i+1);
            return 0;
        }
        j -= y;
    }

    printf("0");

    return 0;
}
