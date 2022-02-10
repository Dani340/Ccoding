#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, k, c, count;
    char *nstr, *kstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("lotokids.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 100, fptr);
    nstr = strtok(S, s);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    printf("%c %d\n", nstr[0], strlen(nstr));

    for(c = 0; c < k; c++) {
        for(i = strlen(nstr)-1; i > 0; i--) {
            if(i == strlen(nstr)-1) {
                count = nstr[i];
                nstr[i] = nstr[i-1];
            }
            else if(i == 1) {
                nstr[i] = count;
            }
            else {
                nstr[i] = nstr[i-1];
            }
        }
    }

    for(i = 0; i < strlen(nstr); i++) {
        printf("%c", nstr[i]);
    }

    return 0;
}
