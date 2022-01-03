#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[75];
    const char s[2] = " ";
    char *mstr, *lstr, *cstr, *nstr;
    int i, l, c, j, m, n, tab[100][100], suba, dir;
    long long nr = 0;

    int poz[100][100] = {0};

    FILE *fptr;

    if ((fptr = fopen("robinson.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    mstr = strtok(S, s);
    m = atoi(mstr);

    nstr = strtok(NULL, s);
    n = atoi(nstr);

    lstr = strtok(NULL, s);
    l = atoi(lstr);

    cstr = strtok(NULL, s);
    c = atoi(cstr);

    // -------------------------a)------------------------ //

    for(i = 0; i < m; i++) {
        tab[i][0] = n;
        n++;
    }
    n = 55;
    for(j = 0; j < m; j++) {
        tab[0][j] = n;
        n++;
    }

    for(i = 1; i < m; i++) {
        for(j = 1; j < m; j++) {
            tab[i][j] = tab[i-1][j] + tab[i][j-1];
        }
    }

    suba = tab[m-1][m-1] % 1000;
    printf("%d\n", suba);

    // -------------------------b)------------------------ //

    l--;
    c--;
    while(poz[l][c] == 0 && l >= 0 && l < m && c >= 0 && c < m)  {
        poz[l][c] = 1;
        printf("%d %d \n", l+1, c+1);
        if(tab[l][c] % 4 == 0) {
            l--;
        }
        else if(tab[l][c] % 4 == 1) {
            c++;
        }
        else if(tab[l][c] % 4 == 2) {
            l++;
        }
        else if(tab[l][c] % 4 == 3) {
            c--;
        }
    }

}
