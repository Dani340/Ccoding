#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[50];
    const char s[2] = " ";
    char* token;
    int i, count=0, n, p, k, sum=0;

    FILE *fptr;

    if ((fptr = fopen("economii.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", line);
	fclose(fptr);

    token = strtok(line, s);
    n = atoi(token);

    token = strtok(NULL, s);
    k = atoi(token);

    token = strtok(NULL, s);
    p = atoi(token);

    for(i = 0; i < n; i++) {
        if((count+1) % 7 == 0) {
            sum = sum - p;
        }
        else if(i % 7 == 0) {
            count = 0;
            sum += k * (count+1);
        }
        else {
            sum += k * (count+1);
        }
        count++;
    }

    printf("The sum is: %d", sum);

    return 0;
}

