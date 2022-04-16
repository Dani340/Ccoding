#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, t, x, mat[100][100], c, l, n;
    char *tstr, *nstr, *lstr, *cstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("matzeb.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 20, fptr);
    tstr = strtok(S, s);
    t = atoi(tstr);

    if(t == 1) {
        nstr = strtok(NULL, s);
        n = atoi(nstr);
    }
    else {
        lstr = strtok(NULL, s);
        l = atoi(lstr);

        cstr = strtok(NULL, s);
        c = atoi(cstr);

        if(l > c) {
            n = l;
        }
        else {
            n = c;
        }
    }

    for(j = 0; j < n; j++) {
        if(j % 2 == 0) {
                mat[0][j] = (j+1) * (j+1);
        }
        else {
            mat[0][j] = mat[0][j-1] + 1;
        }
    }
    for(j = n-1; j > 0; j--) {
        if(j % 2 == 0) {
            for(i = 1; i <= j; i++) {
                mat[i][j] = mat[i-1][j] - 1;
            }

            for(x = j-1; x >= 0; x--) {
                mat[j][x] = mat[j][x+1] - 1;
            }
        }
        else {
            for(i = 1; i <= j; i++) {
                mat[i][j] = mat[i-1][j] + 1;
            }

            for(x = j-1; x >= 0; x--) {
                mat[j][x] = mat[j][x+1] + 1;
            }
        }
    }

    if(t == 1) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("%d", mat[l-1][c-1]);
    }

    return 0;
}
