#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, c, p[100], n, x, t, max = 1;
    bool bool1;
    char *tstr, *nstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("maximum.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 5, fptr);
    tstr = strtok(S, s);
    t = atoi(tstr);

    p[0] = 0;
    p[1] = 1;

    for(i = 0; i < t; i++) {
        fgets(S, 5, fptr);
        nstr = strtok(S, s);
        n = atoi(nstr);

        x = 1;
        max = 1;
        for(j = 2; j <= n; j++) {
            if(j == x*2) {
                p[j] = p[x];
            }
            else if(j == x*2+1) {
                p[j] = p[x] + p[x+1];
                x++;
            }
            if(p[j] > max) {
                max = p[j];
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
