#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int i, j, count = 0, p[100], n;
    for(i = 0; i < 100; i++) {
        p[i] = 1;
    }
    bool bool1 = false;
    char *nstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("felinare.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 5, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    i = 0;
    while(bool1 == false) {
        if(i == 0) {
            if(p[n-1] == 1) {
                if(p[0] == 1) {
                    p[0]--;
                }
                else {
                    p[0]++;
                }
            }
        }
        else if(i != 0) {
            if(p[i-1] == 1) {
                if(p[i] == 1) {
                    p[i]--;
                }
                else {
                    p[i]++;
                }
            }
        }
        count++;

        bool1 = true;
        for(j = 0; j < n; j++) {
            if(p[j] == 0) {
                bool1 = false;
            }
        }



        if(i == n-1) {
            i = 0;
        }
        else {
            i++;
        }
    }

    printf("%d", count);

    return 0;
}
