#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[75], rime1[10];
    char rime[100][10];
    int i, x, k, n;
    int res[40];
    const char s = ' ';
    char* token, *lastword;

    FILE *fptr;

    if ((fptr = fopen("rime.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &n);
    for(i = 0; i < 4*n; i++) {
        fgets(S, 75, fptr);
        token = strrchr(S, s);
        lastword = token + 1;
        printf("%s", lastword);

        x = strlen(lastword)-3;

        for(k = x; k >= 0; k--) {
            if(lastword[x] != 'a' || lastword[x] != 'e' || lastword[x] != 'i' || lastword[x] != 'o' || lastword[x] != 'u') {
                rime[i] = lastword + k;
                break;
            }
        }
        printf("%s ", rime[i]);

    }

    for(i = 0; i < n; i++) {
        if(rime[i*4] == rime[i*4+1] && rime[i*4+2] == rime[i*4+3]) {
            printf("uniforma\n");
        }
        else if(rime[i*4] == rime[i*4+3] && rime[i*4+1] == rime[i*4+2]) {
            printf("imbracata\n");
        }
        else if(rime[i*4] == rime[i*4+2] && rime[i*4+1] == rime[i*4+3]) {
            printf("incrucisata\n");
        }
        else {
            printf("alba\n");
        }
    }

}
