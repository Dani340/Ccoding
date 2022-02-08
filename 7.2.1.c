#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, k, n, a, j, p = 1, sum = 0;
    char *nstr, *kstr;
    char S[75];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("stele.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    kstr = strtok(S, s);
    k = atoi(kstr);

    nstr = strtok(NULL, s);
    n = atoi(nstr);

    for(i = 0; i < k; i++) {
        sum += p;
        p += 2;
    }
    a = sum - p/2 + 1;

    sum = 0;
    p = 1;
    j = 0;
    while(sum < n) {
        sum += p;
        p += 2;

        j++;
    }
    i = 1;
    while(sum != n) {
        sum--;
        i++;
    }

    printf("%d\n%d %d",a,j,i);

    return 0;
}
