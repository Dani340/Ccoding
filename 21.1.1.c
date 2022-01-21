#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, x, sum = 0, nr, p = 1, bool1;
    char *nstr, *kstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("antiterra.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 100, fptr);
    nstr = strtok(S, s);

    while(nstr != NULL) {
        p = 1;
        nr = 0;
        for(i = strlen(nstr)-1; i >= 0; i--) {
            if(i == strlen(nstr)-1) {
                if(nstr[i] == '-') {
                    bool1 = 0;
                }
                else {
                    bool1 = 1;
                }
            }

            if(isdigit(nstr[i])) {
                nr += p*(nstr[i]-48);
                p *= 10;
            }
        }
        if(bool1 == 0) {
            sum -= nr;
        }
        else {
            sum += nr;
        }

        nstr = strtok(NULL, s);
    }

    printf("%d", sum);

    return 0;
}
