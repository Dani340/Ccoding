#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int n, i, j, c1, c2, r1, r2, r3, sir[75], min;
    bool bool1;
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cyber.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        sirstr = strtok(S, s);
        sir[i] = atoi(sirstr);
        if(i == 0) {
            min = sir[0];
        }
        if(min > sir[i]) {
            min = sir[i];
        }
    }

    for(i = 1; i <= min; i++) {
        r1 = sir[0] % i;
        r2 = sir[1] % i;
        if(n == 3) {
            r3 = sir[2] % i;

            if(r1 == r2 && r2 == r3) {
                c1 = i;
            }
        }
        else {
            if(r1 == r2) {
                c1 = i;
            }
        }
    }


    for(i = 2; i <= c1; i++) {
        bool1 = true;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                bool1 = false;
                break;
            }
        }
        if(bool1 == true) {
            c2 = i;
        }
    }

    if(c1 == 1) {
        c2 = 0;
    }

    printf("%d\n%d", c1, c2);

    return 0;
}

