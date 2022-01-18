#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int x, c, n, m, i, j, sir[75];
    int i0 = -1, i1, i2;
    char *cstr, *mstr, *nstr, *xstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cautbin.in.txt", "r")) == NULL) {
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

    fgets(S, 10, fptr);
    mstr = strtok(S, s);
    m = atoi(mstr);

    for(i = 0; i < m; i++) {
        fgets(S, 10, fptr);
        cstr = strtok(S, s);
        c = atoi(cstr);

        xstr = strtok(NULL, s);
        x = atoi(xstr);

        if(c == 0) {
            for(j = 0; j < n; j++) {
                if(sir[j] == x) {
                    i0 = j+1;
                }
            }
            printf("%d\n", i0);
        }

        else if(c == 1) {
            for(j = 0; j < n; j++) {
                if(sir[j] <= x) {
                    i1 = j+1;
                }
            }
            printf("%d\n", i1);
        }

        else {
            for(j = 0; j < n; j++) {
                if(sir[j] >= x) {
                    i2 = j+1;
                    break;
                }
            }
            printf("%d\n", i2);
        }
    }

    return 0;
}
