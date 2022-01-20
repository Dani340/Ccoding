#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int n, m, i, j, table[150][150] = {0}, l, c;
    char *lstr, *cstr;
    bool bool1, bool2;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("tabela.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    lstr = strtok(S, s);
    l = atoi(lstr);

    cstr = strtok(NULL, s);
    c = atoi(cstr);

    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            bool2 = false;
            while(bool2 == false) {
                bool1 = true;
                for(m = 0; m < j; m++) {
                    if(table[i][m] == table[i][j]) {
                        table[i][j]++;
                        bool1 = false;
                    }

                }

                for(n = 0; n < i; n++) {
                    if(table[n][j] == table[i][j]) {
                        table[i][j]++;
                        bool1 = false;
                    }
                }


                if(bool1 == true) {
                    bool2 = true;
                }
            }
        }
    }

    printf("%d", table[l-1][c-1]);

    return 0;
}

