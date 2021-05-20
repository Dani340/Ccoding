#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[50], magicalph[50];
    const char s[2] = " ";
    char *token;
    int i, N;

    FILE *fptr;

    if ((fptr = fopen("magic1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &N);
    fscanf(fptr, "%[^\n]", line);
	fclose(fptr);

    token = strtok(line, s);

    i = 0;
    while(token != NULL ) {
        if(isalpha(atoi(token)) != 0) {
            if(islower(atoi(token))) {
                token = token - 32;
                magicalph[i] = token;
                i++;
            }
        }
        token = strtok(NULL, s);
    }
    printf("%s", magicalph);

    return 0;
}
