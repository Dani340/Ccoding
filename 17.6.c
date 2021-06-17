#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int i, a, b, n, m, k = 0, f, r, rest;
    int arr[50];
    char *fstr;
    char *rstr;
    char S[75];
    const char s[2] = " ";

    FILE *fptr;

    if ((fptr = fopen("cozonaci.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &n);
    for(i = 0; i < n; i++) {
        fgets(S, 75, fptr);

        fstr = strtok(S, s);
        f = atoi(fstr);

        rstr = strtok(NULL, s);
        r = atoi(rstr);
        arr[i] = f - r;
        k += arr[i];
    }
    printf("%d ", k);

    for(i = 0; i < n; i++) {
        a = arr[i];
        if(i == 0) {
            b = arr[1];
            i++;
        }
        else {
            b = m;
        }
        if(a > b) {
            rest = a % b;
            while(rest != 0) {
                a = b;
                b = rest;
                rest = a % b;
            }
            m = b;
        }
        else if(b > a) {
            rest = b % a;
            while(rest != 0) {
                b = a;
                a = rest;
                rest = b % a;
            }
            m = a;
        }
    }
    printf("%d", m);

}
