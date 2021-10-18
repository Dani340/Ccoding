#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i = 0, n;
    int sum = 0, count = 0, state = 0;
    char *nstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("melc.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    while(sum != n) {
        if(i % 3 == 0) {
            sum++;
            count++;
            if(i % 2 == 0) {
                state++;
            }
            else {
                state--;
            }
        }
        else {
            sum += count;
            if(i % 2 == 0) {
                state += count;
            }
            else {
                state -= count;
            }
        }
        i++;
    }

    printf("%d", abs(state));

    return 0;
}
