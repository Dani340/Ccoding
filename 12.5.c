#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, m, n, x, y, num, count, countv, p, matx[100], maty[100], mat[100][100], sumo, sumv;
    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            mat[i][j] = -1;
        }
    }
    bool bool1;
    char *nstr, *mstr, *sirstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("tabel.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 8, fptr);
    mstr = strtok(S, s);
    m = atoi(mstr);

    nstr = strtok(NULL, s);
    n = atoi(nstr);

    fgets(S, 8, fptr);
    mstr = strtok(S, s);
    num = atoi(mstr);

    for(i = 0; i < num; i++) {
        fgets(S, 50, fptr);
        sirstr = strtok(S, s);
        x = atoi(sirstr);

        sirstr = strtok(NULL, s);
        y = atoi(sirstr);

        sirstr = strtok(NULL, s);
        mat[x-1][y-1] = atoi(sirstr);
    }

    for(i = 0; i < m; i++) {
        sumo = 0;
        sumv = 0;
        count = 0;
        x = 0;
        y = 0;
        for(j = 0; j < n; j++) {
            if(mat[i][j] != -1 && j != n-1) {
                sumo += mat[i][j];
            }
            else {
                if(j == n-1 && count == 0) {
                    mat[i][j] = sumo;
                }
                else {
                    count++;
                    matx[x] = i;
                    maty[x] = j;
                    x++;
                }
            }
        }
        if(count == 1) {
            mat[matx[0]][maty[0]] = mat[i][n-1] - sumo;
        }
        else if(count > 1) {
            for(p = 0; p < x; p++) {
                countv = 0;
                for(y = 0; y < m; y++) {
                    if(mat[y][maty[p]] != -1 && y != m-1) {
                        sumv += mat[y][maty[p]];
                    }
                    else {
                        if(y == m-1 && count == 0) {
                            mat[y][maty[p]] = sumv;
                        }
                        else {
                            countv++;
                        }
                    }
                }
                if(countv == 1) {
                    mat[matx[p]][maty[p]] = mat[m-1][maty[p]] - sumv;
                }
            }
        }

        for(p = 0; p < x; p++) {
            matx[p] = 0;
            maty[p] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

