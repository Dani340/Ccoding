#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

struct FataZar {
    int val;
    int valN;
    int valS;
    int valE;
    int valW;
    int valUP;
};

int main() {
    int i = 0, j = 0, p, n, x, y, z, k, rs, re, mem;
    int arr[50], table[20][20] = {0};
    char *nstr, *xstr, *ystr, *zstr, *kstr;
    char S[75], dir[50];
    const char s[2] = " ";
    struct FataZar fatajos;

    FILE *fptr;

    if ((fptr = fopen("peridia.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 75, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);


    xstr = strtok(NULL, s);
    x = atoi(xstr);

    ystr = strtok(NULL, s);
    y = atoi(ystr);

    zstr = strtok(NULL, s);
    z = atoi(zstr);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    fscanf(fptr, "%s", dir);
    fatajos.valUP = x;
    fatajos.val = 7 - x;
    fatajos.valW = y;
    fatajos.valE = 7 - y;
    fatajos.valS = z;
    fatajos.valN = 7 - z;

    for(p = 0; p < k; p++) {
        table[i][j] += fatajos.val;
        if(dir[p] == 78) {
            i++;
            rs = fatajos.valS;
            fatajos.valS = fatajos.val;
            fatajos.val = fatajos.valN;
            fatajos.valN = fatajos.valUP;
            fatajos.valUP = rs;
        }
        else if(dir[p] == 83) {
            i--;
            rs = fatajos.valS;
            fatajos.valS = fatajos.valUP;
            fatajos.valUP = fatajos.valN;
            fatajos.valN = fatajos.val;
            fatajos.val = rs;
        }
        else if(dir[p] == 69) {
            j++;
            re = fatajos.valE;
            fatajos.valE = fatajos.valUP;
            fatajos.valUP = fatajos.valW;
            fatajos.valW = fatajos.val;
            fatajos.val = re;
        }
        else if(dir[p] == 86) {
            j--;
            re = fatajos.valE;
            fatajos.valE = fatajos.val;
            fatajos.val = fatajos.valW;
            fatajos.valW = fatajos.valUP;
            fatajos.valUP = re;
        }
        else {
            printf("You did not enter valid directions!");
        }
    }

    p = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(table[i][j] != 0) {
                arr[p] = table[i][j];
                p++;
            }
        }
    }

    for(i = 0; i < p; i++) {
        for(j = i+1; j < p; j++) {
            if(arr[i] > arr[j]) {
                mem = arr[i];
                arr[i] = arr[j];
                arr[j] = mem;
            }
        }
        printf("%d ", arr[i]);
    }

    return 0;
}
