#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, p, count = 0, sir[100], n;
    int p1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int p2[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int p3[] = {10, 11, 12, 13, 14, 15};
    bool bool1 = false;
    char *pstr, *nstr, *sirstr;
    char S[100];
    const char s[2] = "#";
    FILE *fptr;

    if ((fptr = fopen("cod.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 5, fptr);
    pstr = strtok(S, " ");
    p = atoi(pstr);

    fgets(S, 5, fptr);
    nstr = strtok(S, " ");
    n = atoi(nstr);

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
    }

    if(p == 1) {
        for(i = 0; i < n; i++) {
            bool1 = false;
            for(j = 0; j < 14; j++) {
                if(sir[i] % p1[j] == 0) {
                    bool1 = true;
                    break;
                }
            }
            if(bool1 == false) {
                count++;
            }
        }
        printf("%d", count);
    }
    else if(p == 2) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < 8; j++) {
                if(sir[i] % p2[j] == 0) {
                    count++;
                }
            }
        }
        printf("%d", count);
    }
    else {
        for(i = 0; i < n; i++) {
            for(j = 0; j < 6; j++) {
                if(sir[i] % p3[j] == 0) {
                    count++;
                }
            }
        }
        printf("%d", count);
    }

    return 0;
}
