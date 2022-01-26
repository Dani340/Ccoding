#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, j, sir[100], ang[100][100], x[100] = {0}, n;
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            ang[i][j] = -1;
        }
    }

    FILE *fptr;

    if ((fptr = fopen("ierarhie.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);
    sir[0] = atoi(sirstr);
    ang[sir[0]][x[sir[0]]] = 1;
    x[sir[0]]++;

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[i] = atoi(sirstr);
        ang[sir[i]][x[sir[i]]] = i+1;
        x[sir[i]]++;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < x[i]; j++) {
            if(ang[i][j] != -1 && j == 0) {
                if(i != 0) {
                    printf("%d %d ", i, ang[i][j]);
                }
                else {
                    printf("%d", ang[i][j]);
                }
            }
            else if(ang[i][j] != -1) {
                printf("%d ", ang[i][j]);
            }
        }
        if(ang[i][x[i]-1] != -1) {
            printf("\n");
        }
    }

    return 0;
}
