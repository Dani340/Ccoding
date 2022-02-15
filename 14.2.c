#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    int i, j, x = 0, y = 0, m, z, count, biggestx, lowestx, biggesty, lowesty;
    int sirx[100], siry[100], n;
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("gps.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        sirstr = strtok(S, s);
        sirx[i] = atoi(sirstr);

        sirstr = strtok(NULL, s);
        siry[i] = atoi(sirstr);
    }

    count = pow(2, n);

    for(i = 0; i < n; i++) {
        for(j = n-1; j > i; j--) {
            biggestx = -1;
            lowestx = 100;
            biggesty = -1;
            lowesty = 100;
            for(m = i; m <= j; m++) {
                if(sirx[m] < lowestx) {
                    lowestx = sirx[m];
                }
                if(sirx[m] > biggestx) {
                    biggestx = sirx[m];
                }
                if(siry[m] < lowesty) {
                    lowesty = siry[m];
                }
                if(siry[m] > biggesty) {
                    biggesty = siry[m];
                }
            }
            for(z = 0; z < n; z++) {
                if(z < i || z > j) {
                    if(sirx[z] > lowestx && sirx[z] < biggestx) {
                        if(siry[z] > lowesty && siry[z] < biggesty) {
                            count--;
                        }
                    }
                    else if(siry[z] > lowesty && siry[z] < biggesty) {
                        if(sirx[z] > lowestx && sirx[z] < biggestx) {
                            count--;
                        }
                    }
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}
