#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i = 0, j = 0, n, m, c, k, t = 0, sum = 0;
    int sir[75];
    char *cstr, *nstr, *mstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("patrate4.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    cstr = strtok(S, s);
    c = atoi(cstr);

    if(c == 1) {
        fgets(S, 10, fptr);
        mstr = strtok(S, s);
        m = atoi(mstr);

        k = 8*m;
        printf("%d", k);
    }
    else if(c == 2) {
        fgets(S, 10, fptr);
        nstr = strtok(S, s);
        n = atoi(nstr);

        while(n > sum) {
            t++;
            sum += 8*t;
        }

        printf("%d", t);
    }

    return 0;
}
