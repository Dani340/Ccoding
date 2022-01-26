#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, nr = 1, sir[50], count = -1, n;
    char *nstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("carti1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        sirstr = strtok(S, s);
        sir[i] = atoi(sirstr);
    }

    while(nr != n+1) {
        count++;
        for(i = 0; i < n; i++) {
            if(sir[i] == nr) {
                nr++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
