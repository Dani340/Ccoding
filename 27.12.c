#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[75];
    const char s[2] = " ";
    char *roatastr, *nstr, *kstr;
    int i, n, k, j, roata[100][100], cod[50], p = 1;
    long long nr = 0;

    FILE *fptr;

    if ((fptr = fopen("parola3.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    kstr = strtok(NULL, s);
    k = atoi(kstr);

    for(i = 0; i < n; i++) {
        fgets(S, 75, fptr);

        j = 1;
        roatastr = strtok(S, s);
        roata[i][0] = atoi(roatastr);

        while(roatastr != NULL) {
            roatastr = strtok(NULL, s);
            roata[i][j] = atoi(roatastr);
            j++;
        }
    }

    int x = 0;
    int x1 = n/2-1;
    int x2 = 0;
    int x3 = n/2;
    int x4 = n-1;
    for(i = 0; i <= n/2-1; i++) {
        cod[x] = roata[i][x1];
        x++;
        x1--;
    }
    for(i = n/2; i < n; i++) {
        cod[x] = roata[i][x2];
        x++;
        x2++;
    }
    for(i = n-1; i >= n/2; i--) {
        cod[x] = roata[i][x3];
        x++;
        x3++;
    }
    for(i = n/2-1; i >= 0; i--) {
        cod[x] = roata[i][x4];
        x++;
        x4--;
    }

    k = k % x;
    for(i = x-1; i >= k; i--) {
        nr += p*cod[i];
        p = p*10;
    }
    for(i = 0; i < k; i++) {
        nr *= 10;
        nr += cod[i];
    }

    printf("%lld", nr);

    return 0;
}
