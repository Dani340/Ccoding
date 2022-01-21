#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, j, v[50], t[50], n, x, sum, count, poz, max = -1;
    char *nstr, *vstr, *tstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("asasin.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 10, fptr);
        vstr = strtok(S, s);
        v[i] = atoi(vstr);

        tstr = strtok(NULL, s);
        t[i] = atoi(tstr);
    }

    for(i = 0; i < n; i++) {
        for(j = n-1; j > i; j--) {
            sum = 0;
            for(x = i; x < j; x++) {
                if(t[x] == -1) {
                    sum -= v[x];
                }
                else if(t[x] == 1) {
                    sum += v[x];
                }
            }
            if(sum > max) {
                max = sum;
                count = j-i;
                poz = i;
            }
            else if(sum == max) {
                if(poz > i) {
                    poz = i;
                    count = i-j;
                }
                else if(poz == i) {
                    if(count > j-i) {
                        count = j-i;
                    }
                }
            }
        }
    }

    printf("%d %d %d", max, poz+1, count);

    return 0;
}


