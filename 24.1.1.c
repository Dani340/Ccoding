#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, n, j, count = 0;
    char sir[100][100];
    char *nstr, *sirstr;
    char S[200];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("sport1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 200, fptr);
    sirstr = strtok(S, s);
    sir[n][0] = atoi(sirstr);
    if(sir[n][0] == 1) {
        count++;
    }

    for(i = 1; i < n; i++) {
        sirstr = strtok(NULL, s);
        sir[n][i] = atoi(sirstr);
        if(sir[n][i] == 1) {
            count++;
        }
    }

    for(i = n; i > 1; i--) {
        for(j = 1; j < i; j++) {
            if(sir[i][j-1] == sir[i][j]) {
                sir[i-1][j-1] = 0;
            }
            else {
                sir[i-1][j-1] = 1;
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
