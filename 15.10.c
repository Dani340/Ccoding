#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 0, j, x, num[24][1000], n;
    int count = 1;
    char *nstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("agent.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < 24; i++) {
        for(j = 0; j < 1000; j++) {
            num[i][j] = 9;
        }
    }

    num[0][0] = 1;
    for(i = 0; i < n-1; i++) {
        x = 0;
        j = 0;
        while(num[i][x] != 9) {
            while(num[i][x] == num[i][x+1]) {
                count++;
                x++;
            }
            num[i+1][j] = count;
            num[i+1][j+1] = num[i][x];
            count = 1;
            j = j+2;
            x++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("%d", num[n-1][i]);
    }


    return 0;
}
