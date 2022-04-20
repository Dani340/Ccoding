#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, a = 1, count = 1, max = 0, p[100], h[100], n;
    bool bool1;
    char *nstr, *pstr, *hstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("domino2.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 5, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        pstr = strtok(S, s);
        p[i] = atoi(pstr);

        hstr = strtok(NULL, s);
        h[i] = atoi(hstr);
    }

    for(i = 0; i < n; i++) {
        if(i + 1 != n) {
            if(p[i] + h[i] > p[i+1]) {
                count++;
            }
            else {
                a++;
                if(count > max) {
                    max = count;
                }
                count = 1;
            }
        }
    }

    if(count > max) {
        max = count;
    }

    printf("%d %d", a, max);

    return 0;
}
