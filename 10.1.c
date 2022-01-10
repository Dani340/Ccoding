#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int x, y, c, k, p = 1, sum = 0;
    char *cstr, *kstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("desen.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    cstr = strtok(S, s);
    c = atoi(cstr);

    fgets(S, 10, fptr);
    kstr = strtok(S, s);
    k = atoi(kstr);

    if(c == 1) {
        while(k >= sum) {
            sum += p;
            p = p * 2;
        }
        y = sum;
        x = sum - p/2 + 1;
        printf("%d %d", x, y);
    }
    else if(c == 2) {
        while(k > 0) {
            printf("%d ", k);
            k = k / 2;
        }
    }

    return 0;
}
