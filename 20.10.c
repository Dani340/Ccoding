#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 1, j = 0, a, b, plate[50], count[50], counta = 0, countback[i], n, biggest, bnl;
    char *nstr, *xstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("case1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 75, fptr);
    xstr = strtok(S, s);
    plate[0] = atoi(xstr);

    while(xstr != NULL) {
        xstr = strtok(NULL, s);
        plate[i] = atoi(xstr);

        i++;
    }

    for(i = 0; i < n; i++) {
        count[i] = 1;
        countback[i] = 0;
        j = i+1;
        if(j == plate[i]) {
            counta++;
        }
        else {
            j = plate[i]-1;
            count[i]++;
            while(plate[j] != i+1) {
                count[i]++;
                if(j > plate[j]) {
                    countback[i]++;
                }
                j = plate[j]-1;
            }
        }
    }

    for(i = 0; i < n; i++) {
        if(i == 0) {
            biggest = count[0];
        }
        else {
            if(biggest < count[i]) {
                biggest = count[i];
                bnl = i;
            }
            else if(biggest == count[i]) {
                if(countback[i] < countback[bnl]) {
                    bnl = i;
                }
            }
        }
    }

    printf("%d\n%d\n%d", counta, biggest, bnl+1);

    return 0;
}

