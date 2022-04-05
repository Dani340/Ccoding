#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    long long int i, j, c, p[100], n, aux, max = 1, maxi = 1;
    for(i = 0; i < 100; i++) {
        p[i] = 0;
    }
    bool bool1;
    char *nstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("factor.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 100, fptr);
    nstr = strtok(S, s);
    n = atoll(nstr);
    aux = n;

    i = 2;

    while(n % 2 == 0) {
        p[i]++;
        n /= 2;
    }

    for(i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            p[i]++;
            n /= i;
        }
        if(p[i] > max) {
            max = p[i];
            maxi = i;
        }
        else if(p[i] == max) {
            if(i > maxi) {
                maxi = i;
            }
        }
    }

    if(p[2] > max) {
        max = p[2];
        maxi = 2;
    }

    c = maxi % 10;

    int count = 0, v;
    while(aux != 0) {
        v = aux % 10;
        if(c == v) {
            count++;
        }
        aux /= 10;
    }

    printf("%d", count);

    return 0;
}
