#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 0, j = 0, x = 0, foto[100][100] = {0}, sp[200] = {0}, c, n, m, f = 0, h[100] = {0}, memi[200], memj[200], fotobool[100][100] = {0};
    int biggest, biggesth;
    char *cstr, *nstr, *mstr, *fotostr;
    char S[75], dir[50];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("foto1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    cstr = strtok(S, s);
    c = atoi(cstr);

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    mstr = strtok(NULL, s);
    m = atoi(mstr);

    for(i = 0; i < n; i++) {
        fgets(S, 75, fptr);

        j = 1;
        fotostr = strtok(S, s);
        foto[i][0] = atoi(fotostr);

        while(fotostr != NULL) {
            fotostr = strtok(NULL, s);
            foto[i][j] = atoi(fotostr);

            j++;
        }
    }

    if(c == 1) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                if(foto[i][j] == 0) {
                    sp[x]++;
                }
                else {
                    x++;
                }
            }
            x++;
        }

        for(i = 0; i <= x; i++) {
            if(i == 0) {
                biggest = sp[0];
            }
            else if(biggest < sp[i]) {
                biggest = sp[i];
            }
        }

        printf("%d", biggest);
    }
    else if(c == 2) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                if(foto[i][j] == 1) {
                    if(fotobool[i][j] == 0) {
                        fotobool[i][j] = 1;
                        h[x]++;
                        f++;
                        memi[x] = i;
                        memj[x] = j;

                        while(foto[memi[x]+1][memj[x]] == 1 || foto[memi[x]+1][memj[x]-1] == 1 || foto[memi[x]+1][memj[x]+1] == 1) {
                            if(foto[memi[x]+1][memj[x]-1] == 1) {
                                fotobool[memi[x]+1][memj[x]-1] = 1;
                                --memj[x];
                            }
                            else if(foto[memi[x]+1][memj[x]+1] == 1) {
                                fotobool[memi[x]+1][memj[x]+1] = 1;
                                ++memj[x];
                            }
                            else if(foto[memi[x]+1][memj[x]] == 1) {
                                fotobool[memi[x]+1][memj[x]] = 1;
                            }
                            h[x]++;
                            memi[x]++;
                        }
                        x++;
                    }
                }
            }
        }
        for(i = 0; i <= x; i++) {
            if(i == 0) {
                biggesth = h[i];
            }
            else if(biggesth < h[i]) {
                biggesth = h[i];
            }
        }

        printf("%d %d", f, biggesth);
    }
    else {
        printf("Nu ai introdus o cerinta valida! (1 sau 2)");
    }

    return 0;
}
