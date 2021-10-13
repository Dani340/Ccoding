#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 0, j = 0, wood[100], n, p, q;
    int bcount = 0, pcount = 0, qcount = 0, nonecount = 0;
    char *pstr, *nstr, *qstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("gardul.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 10, fptr);
    pstr = strtok(S, s);
    p = atoi(pstr);

    qstr = strtok(NULL, s);
    q = atoi(qstr);

    for(i = 0; i < n; i++) {
        if((i+1) % p == 0 && (i+1) % q == 0) {
            bcount++;
        }
        else if((i+1) % p == 0) {
            pcount++;
        }
        else if((i+1) % q == 0) {
            qcount++;
        }
        else {
            nonecount++;
        }
    }

    printf("%d\n%d\n%d\n%d", nonecount, pcount, qcount, bcount);

    return 0;
}
