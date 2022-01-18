#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int n, k, i, j, sum, count = 0, sir[75];
    bool bool1;
    char *nstr, *kstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("imperfect.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    kstr = strtok(S, s);
    k = atoi(kstr);

    fgets(S, 75, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
    }

    for(i = 0; i < n; i++) {
        bool1 = true;
        for(j = 0; j < n; j++) {
            if(j != i) {
                sum = sir[i]+sir[j];
                if(sum % k == 0) {
                    bool1 = false;
                    break;
                }
            }
        }
        if(bool1 == true) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

