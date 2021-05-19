#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_spaces(char* s) {
    const char* d = s;

    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

int main() {
    char line[50];
    const char plus[2] = "+";
    char *token;
    int i, x = 0, y = 1, sum = 0;

    FILE *fptr;

    if ((fptr = fopen("tastatura1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%s\n", line);
	fclose(fptr);

    for(i = 0; i < strlen(line); i++) {
        if((line[i] != '+' && line[i] != '#') && (line[i] > 'J' || line[i] < 'A')) {
            printf("You did not enter a valid letter or symbol");
            return 0;
        }
        else if(line[i] <= 'J' && line[i] >= 'A') {
            line[i] = line[i] - 65;
        }
        else if(line[i] == '#') {
            line[i] = line[i] - 3;
        }
    }

    remove_spaces(line);

    token = strtok(line, plus);

    while(token != NULL ) {
        printf( " %s\n", token );
        token = strtok(NULL, plus);
        sum += atoi(token);
    }
    printf("%d", sum);


}

