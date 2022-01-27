#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, count = 0, p = 1;
    char *nstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("cluburi.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    while(n != 0) {
        if(n % 2 == 1) {
            printf("%d ", p);
            count++;
        }
        n = n / 2;
        p *= 2;
    }

    printf("\n%d", count);

    return 0;
}
