#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i, j, n, count = 0, max = -1, aux, x;
    bool bool1 = false;
    int sir[100], sirtuns[100] = {0};
    char *sirstr, *nstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("copaci.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 5, fptr);
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
        max = -1;
        for(i = 0; i < n; i++) {
            if(sirtuns[i] == 0 && sir[i] > max) {
                max = sir[i];
                aux = i;
            }
        }
        for(x = n-1; x >= aux; x--) {
            sirtuns[x] = 1;
        }
        n = aux;

        bool1 = true;
        for(i = 0; i < n; i++) {
            if(sirtuns[i] == 0) {
                bool1 = false;
                break;
            }
        }
        count++;
    }

    printf("%d", count);

    return 0;
}
