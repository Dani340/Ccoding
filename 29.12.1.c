#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char S[75];
    const char s[2] = " ";
    char *matstr, *lstr, *cstr, *pstr, *plstr, *qstr, *qcstr;
    int i, l, c, j, mat[100][100], pl[50], qc[50], p, q;
    int row = -1, column = -1, x;
    long long nr = 0;

    FILE *fptr;

    if ((fptr = fopen("matrixdel.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    lstr = strtok(S, s);
    l = atoi(lstr);

    cstr = strtok(NULL, s);
    c = atoi(cstr);

    for(i = 0; i < l; i++) {
        fgets(S, 75, fptr);

        j = 1;
        matstr = strtok(S, s);
        mat[i][0] = atoi(matstr);

        while(matstr != NULL) {
            matstr = strtok(NULL, s);
            mat[i][j] = atoi(matstr);
            j++;
        }
    }

    fgets(S, 10, fptr);
    pstr = strtok(S, s);
    p = atoi(pstr);

    fgets(S, 75, fptr);
    plstr = strtok(S, s);
    pl[0] = atoi(plstr);

    for(i = 1; i < p; i++) {
        plstr = strtok(NULL, s);
        pl[i] = atoi(plstr);
    }

    fgets(S, 10, fptr);
    qstr = strtok(S, s);
    q = atoi(qstr);

    fgets(S, 75, fptr);
    qcstr = strtok(S, s);
    qc[0] = atoi(qcstr);

    for(j = 1; j < q; j++) {
        qcstr = strtok(NULL, s);
        qc[j] = atoi(qcstr);
    }

    int result[l-p][c-q];
    bool bool1 = false;
    int cond, cond1;

    for (i = 0; i < l; i++) {
        bool1 = false;
        cond = 0;
        for(x = 0; x < p; x++) {
            if(i == pl[x]-1) {
                bool1 = true;
            }
        }
        if (bool1 == false) {
            row++;
            cond++;
        }

        column = -1;
        for (j = 0; j < c; j ++) {
            cond1 = cond;
            bool1 = false;
            for(x = 0; x < q; x++) {
                if(j == qc[x]-1) {
                    bool1 = true;
                }
            }
            if (bool1 == false) {
                column++;
                cond1++;

            }

            if(cond1 == 2) {
                result[row][column] = mat[i][j];
            }

        }
    }

    for(i = 0; i < (l-p); i++) {
        for(j = 0; j < (c-q); j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}
