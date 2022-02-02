#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i, j, lenx, len, x, y, r, low = 100;
    int alpha[26] = {0};
    char mat[100][100];
    int n, k;
    char *mes, *nstr, *cheiestr, *kstr, lowalp;
    char S[100];
    const char s[2] = " ";
    for(i = 0; i < 25; i++) {
        alpha[i] = 0;
    }
    FILE *fptr;

    if ((fptr = fopen("mesaj1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 5, fptr);
    kstr = strtok(S, s);
    k = atoi(kstr);

    fgets(S, 100, fptr);
    cheiestr = strtok(S, s);

    fgets(S, 5, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 100, fptr);
    mes = strtok(S, "\n");

    for(i = 0; i < n; i++) {
        if(mes[i] != ' ') {
            j = mes[i]-65;
            alpha[j]++;
        }
    }

    for(i = 0; i < 25; i++) {
        if(alpha[i] < low && alpha[i] != 0) {
            low = alpha[i];
            lowalp = i+65;
        }
    }
    printf("%c\n", lowalp);

    len = n/k;
    r = n%k-1;
    x = 0;
    y = 0;
    for(i = 0; i < n; i++) {
        if(x == 0) {
            if(y <= r) {
                lenx = len+1;
            }
            else {
                lenx = len;
            }
        }
        if(x < lenx) {
            mat[x][y] = mes[i];
            x++;
        }
        else {
            y++;
            x = 0;
            mat[x][y] = mes[i];
        }
    }

    i = 0;

    for(i = 0; i < len; i++) {
        for(j = 0; j < k; j++) {
            printf("%c", mat[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        printf("%c", mat[len][i]);
    }


    return 0;
}
