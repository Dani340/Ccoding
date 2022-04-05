#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    long long int i, j, x, y, z, p = 1;
    int c, k, count = 1, arr[10], max, maxc;
    bool bool1;
    char *cstr, *xstr, *kstr, *ystr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("copii.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }


    fgets(S, 5, fptr);
    cstr = strtok(S, s);
    c = atoi(cstr);

    if(c == 1) {
        fgets(S, 100, fptr);
        xstr = strtok(S, s);
        x = atoll(xstr);

        fgets(S, 5, fptr);
        kstr = strtok(S, s);
        k = atoi(kstr);

        for(i = 2; i <= x; i++) {
            p *= i;
        }
        while(p % 10 == 0) {
            p /= 10;
        }

        while(count <= k) {
            arr[count] = p % 10;
            p /= 10;
            count++;
        }
        for(i = k; i >= 1; i--) {
            printf("%d", arr[i]);
        }
    }
    else {
        fgets(S, 100, fptr);
        xstr = strtok(S, s);
        x = atoll(xstr);

        for(i = 1; i <= x; i++) {
            count = 0;
            for(j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }
            if(count % 2 == 1) {
                max = i;
                maxc = count;
            }
        }

        printf("%d %d", max, maxc);
    }

    return 0;
}
