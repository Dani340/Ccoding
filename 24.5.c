#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[50];
    const char s[2] = " ";
    char *token;
    char* astr;
    astr = malloc(50*sizeof (char));
    char* bstr;
    bstr = malloc(50*sizeof (char));
    int i, a[50], b[50], res[50], k;

    FILE *fptr;

    if ((fptr = fopen("parola.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &k);
    fscanf(fptr, "%[^\n]", line);
	fclose(fptr);

    token = strtok(line, s);
    astr = token;

    if(token != NULL ) {
        token = strtok(NULL, s);
        bstr = token;
    }

    for(i = 0; i < strlen(astr); i++) {
        a[i] = astr[i] - 48;
    }

    for(i = 0; i < strlen(bstr); i++) {
        b[i] = bstr[i] - 48;
    }

    for(i = 0; i < k; i++) {
        res[i] = a[i];
    }

    res[k] = b[strlen(bstr)-1];

    for(i = 0; i < k+1; i ++) {
        printf("%d", res[i]);
    }

    int x = k+2;
    int j = strlen(bstr)-1;
    while(i < strlen(astr) && j >= 0) {
        res[x] = a[i];
        res[x+1] = b[j];
        x = x + 2;
        i++;
        j--;
    }

    while(i < strlen(astr)) {
        res[x] = a[i];
        x++;
        i++;
    }

    while(j >= strlen(bstr)) {
        res[x] = b[j];
        x++;
        j--;
    }

    int count = x;
    printf("The password is: ");
    for(x = 0; x < count; x++) {
        printf("%d", res[x]);
    }

}
