#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, n, m, c, sum = 0;
    int nsir[75], msir[150];
    char *mstr, *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cautare1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    mstr = strtok(NULL, s);
    m = atoi(mstr);

    fgets(S, 75, fptr);
    sirstr = strtok(S, s);
    nsir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        nsir[i] = atoi(sirstr);
    }

    fgets(S, 75, fptr);
    sirstr = strtok(S, s);
    msir[0] = atoi(sirstr);

    for(c = 0; c < n; c++) {
        if(nsir[c] == msir[i]) {
            sum += c+1;
            break;
        }
    }
    printf("%d\n", sum);

    for(i = 1; i < m; i++) {
        sum = 0;
        sirstr = strtok(NULL, s);
        msir[i] = atoi(sirstr);

        for(c = 0; c < n; c++) {
            if(nsir[c] == msir[i]) {
                sum += c+1;
                break;
            }
        }
        printf("%d\n", sum);
    }

}
