#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, x = 0, count = 0, sum = 0, lowi, max;
    int sir[100], choice[100], h, n;
    char *nstr, *hstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("flori3.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    hstr = strtok(NULL, s);
    h = atoi(hstr);

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
    }

    for(i = 1; i <= n; i++) {
        x++;
        sum += x + sir[i-1];
    }

    x = 0;
    max = -1;
    while(max < h) {
        for(i = 0; i < n; i++) {
            if(i == 0) {
                lowi = 0;
            }
            else {
                if(sir[i] < sir[lowi]) {
                    lowi = i;
                }
            }
        }
        choice[x] = lowi;
        for(i = 0; i <= x; i++) {
            sir[choice[i]]++;
        }
        x++;
        count++;
        for(i = 0; i < n; i++) {
            if(i == 0) {
                max = sir[0];
            }
            else {
                if(sir[i] > max) {
                    max = sir[i];
                }
            }
        }
    }

    printf("%d\n%d", sum, count-1);

    return 0;
}
