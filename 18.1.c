#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, x, sum = 0, xp, p = 1;
    char *nstr, *kstr, *sirstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("petale.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);

    for(i = strlen(nstr)-1; i >= 0; i--) {
        if(nstr[i] != 'x') {
            sum += p*(nstr[i]-48);
        }
        else {
            xp = p;
        }
        p *= 3;
    }

    if(sum % 7 == 0) {
        x = 0;
    }
    else if((sum + xp*1) % 7 == 0) {
        x = 1;
    }
    else if((sum + xp*2) % 7 == 0) {
        x = 2;
    }
    else {
        x = -1;
    }

    printf("%d", x);

    return 0;
}
