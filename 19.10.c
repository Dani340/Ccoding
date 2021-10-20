#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 1, j = 0, a, b, num[50], n;
    char *nstr, *xstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("plaja1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    fgets(S, 75, fptr);
    xstr = strtok(S, s);
    num[0] = atoi(xstr);

    while(xstr != NULL) {
        xstr = strtok(NULL, s);
        num[i] = atoi(xstr);

        i++;
    }

    for(i = 0; i < n; i++) {
        if(i != 0) {
            a = num[i];
            b = num[i-1];
            while(a != b) {
                if(a > b) {
                    b += num[i-1];
                }
                else if(a < b) {
                    a += num[i];
                }
            }
            num[i] = b;
        }
    }

    printf("%d", num[n-1]);

    return 0;
}

