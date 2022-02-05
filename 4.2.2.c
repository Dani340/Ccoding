#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i, x = 0, r = 0, t = 0;
    int sir[100], sir2[100], n;
    bool bool1 = false;
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("ruleta1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
    }

    while(bool1 == false) {
        for(i = 0; i < n; i++) {
            sir2[i] = sir[i];
        }

        for(i = 0; i < n; i++) {
            if(i != n-1) {
                if(sir[i] <= sir[i+1]) {
                    sir[i+1] -= sir[i];
                }
            }
            else {
                if(sir[i] <= sir[0]) {
                    sir[0] -= sir[i];
                }
            }
        }

        bool1 = true;
        for(i = 0; i < n; i++) {
            if(sir[i] != sir2[i]) {
                bool1 = false;
            }
        }
        r++;
    }

    for(i = 0; i < n; i++) {
        if(sir[i] != 0) {
            t++;
        }
    }

    printf("%d %d",r,t);

    return 0;
}
