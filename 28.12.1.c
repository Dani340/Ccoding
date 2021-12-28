#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[35];
    const char s[2] = " ";
    char *astr;
    char *bstr;
    int i, j, x, a[50], b[50], res[100];

    FILE *fptr;

    if ((fptr = fopen("impletire.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 30, fptr);
    astr = strtok(S, s);

    fgets(S, 30, fptr);
    bstr = strtok(S, s);

    for(i = 0; i < strlen(astr); i++) {
        a[i] = astr[i] - 48;
    }
    for(i = 0; i < strlen(bstr); i++) {
        b[i] = bstr[i] - 48;
    }

    x = 0;
    i = 0;
    j = 0;
    while(i < strlen(astr) && j < strlen(bstr)) {
        if(a[i] < b[j]) {
            res[x] = b[j];
            j++;
        }
        else {
            res[x] = a[i];
            i++;
        }
        x++;
    }

    while(i < strlen(astr)) {
        res[x] = a[i];
        x++;
        i++;
    }

    while(j < strlen(bstr)) {
        res[x] = b[j];
        x++;
        j++;
    }

    int count = x;
    for(x = 0; x < count; x++) {
        printf("%d", res[x]);
    }

    return 0;
}
