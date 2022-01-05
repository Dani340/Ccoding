#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void zana(int mat[100][100], int n, int m, int i, int j, int *x, int *y) {
    if (i >= n || j >= m) {
        return;
    }
    if (mat[i][j] >= 1) {
        if((*x) > mat[i][j]) {
            (*x) = mat[i][j];
            (*y) = 0;
        }
        else if((*x) == mat[i][j]) {
            (*y)++;
        }
        return;
    }
    else {
        return zana(mat, n, m, i, j+1, x, y);
        return zana(mat, n, m, i+1, j, x, y);
    }
}

int main() {
    int i = 0, j = 0, u, aux, n, m, k;
    int x = -1, y = 0;
    int mat[100][100] = {0};
    char *nstr, *mstr, *kstr, *istr, *jstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("zana.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    mstr = strtok(NULL, s);
    m = atoi(mstr);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    for(u = 0; u < k; u++) {
        fgets(S, 10, fptr);

        istr = strtok(S, s);
        i = atoi(istr);
        i--;

        jstr = strtok(NULL, s);
        j = atoi(jstr);
        j--;

        mat[i][j]++;
    }

    zana(mat, n, m, i, j, &x, &y);

    printf("%d %d", x, y);
}
