#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[50];
    int i, j, n, S, sum = 0;

    FILE *fptr;

    if ((fptr = fopen("neagigi.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &n);
    fscanf(fptr, "%d\n", &S);

    for(i = 0; i < n; i++) {
        fgets(s, 50, fptr);
        for(j = 0; j < strlen(s); j++) {
            if(isalpha(s[j]) != 0) {
                sum += s[j];
            }
        }
    }

    if(sum <= S) {
        printf("The budget of Nea Gigi can cover all of the expenses\n");
    }
    else {
        printf("The budget is not enough to cover all of the expenses\n");
    }
    printf("%d", sum);

	fclose(fptr);

}
