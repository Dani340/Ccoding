#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    int i, x = 0, c, count, sirbool[100];
    float cost[100], sirg[100], sirx[100], siry[100], n;
    for(i = 0; i < 100; i++) {
        sirg[i] = 1;
        sirbool[i] = 0;
    }
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("reducere.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        sirstr = strtok(S, s);
        sirx[i] = atof(sirstr);

        sirstr = strtok(NULL, s);
        siry[i] = atof(sirstr);
    }

    c = n;
    for(i = 0; i < n; i++) {
        if(sirbool[i] && sirbool[i+1] == 0) {
            sirbool[c] = 0;
            sirbool[i] = 1;
            sirbool[i+1] = 1;
            sirg[c] = sirg[i] + sirg[i+1];
            sirx[c] = (sirx[i] * sirg[i] + sirx[i+1] * sirg[i+1]) / sirg[c];
            siry[c] = (siry[i] * sirg[i] + siry[i+1] * sirg[i+1]) / sirg[c];
            cost[c] = sirg[i] * sirg[i+1] * sqrt(pow((sirx[i]-sirx[i+1]), 2) + pow((siry[i]-siry[i+1]), 2));
            c++;
        }
    }

    x = c;
    while(count != 1) {
        count = 0;
        for(i = 0; i <= c; i++) {
            if(sirbool[i] && sirbool[i+1] == 0) {
                sirbool[c] = 0;
                sirbool[i] = 1;
                sirbool[i+1] = 1;
                sirg[c] = sirg[i] + sirg[i+1];
                sirx[c] = (sirx[i] * sirg[i] + sirx[i+1] * sirg[i+1]) / sirg[c];
                siry[c] = (siry[i] * sirg[i] + siry[i+1] * sirg[i+1]) / sirg[c];
                cost[c] = sirg[i] * sirg[i+1] * sqrt(pow((sirx[i]-sirx[i+1]), 2) + pow((siry[i]-siry[i+1]), 2));
                x++;
                count++;
            }
        }
        c = x;
    }

    printf("%f", cost[c]);

    return 0;
}
