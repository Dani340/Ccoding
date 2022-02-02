#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    long long int i, j, c, p, num;
    bool bool1;
    int sir;
    char *sirstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("factori.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 5, fptr);
    sirstr = strtok(S, s);
    sir = atoi(sirstr);

    while(sir != 0) {
        c = 2;
        num = 1;
        for(i = 2; i <= sir; i++) {
            num *= i;
        }
        while(num != 1) {
            p = 0;
            bool1 = true;
            for(j = 2; j <= c/2; j++) {
                if(c % j == 0) {
                    bool1 = false;
                    break;
                }
            }
            if(bool1 == true) {
                while(num % c == 0 && num != 1) {
                    p++;
                    num = num / c;
                }
                if(p != 0) {
                    printf("%d ", p);
                }
            }
            c++;
        }

        fgets(S, 5, fptr);
        sirstr = strtok(S, s);
        sir = atoi(sirstr);
        printf("\n");
    }

    return 0;
}
