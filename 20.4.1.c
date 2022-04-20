#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, aux, x = 0, sirl[100], sir[100], sirnou[100], n;
    for(i = 0; i < 100; i++) {
        sirl[i] = 0;
    }
    bool bool1;
    char *nstr, *sirstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cod5.in.txt", "r")) == NULL) {
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

    for(i = 0; i < n; i++) {
        if(sirl[i] == 0) {
            bool1 = false;
            for(j = i+1; j < n; j++) {
                if(sir[i] == sir[j] && sirl[j] == 0) {
                    sirl[j] = 1;
                    bool1 = true;
                    break;
                }
            }
            if(bool1 == false) {
                sirnou[x] = sir[i];
                x++;
            }
        }
    }

    for(i = 0; i < x; i++) {
        for(j = i+1; j < x; j++) {
            if(sirnou[i] > sirnou[j]) {
                aux = sirnou[i];
                sirnou[i] = sirnou[j];
                sirnou[j] = aux;
            }
        }
    }

    for(i = 0; i < x; i++) {
        printf("%d", sirnou[i]);
    }

    return 0;
}

