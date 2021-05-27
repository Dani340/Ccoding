#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct action {
  int op;
  int value;
};

int main() {
    char line[50];
    const char s[2] = " ";
    char* token;
    int arr[50], asc[50];
    int mem, i, j, n, p, k, sum=0;
    struct action Action[30];

    FILE *fptr;

    if ((fptr = fopen("magazin.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", line);
	fclose(fptr);

    token = strtok(line, s);
    n = atoi(token);

    token = strtok(NULL, s);
    k = atoi(token);

    for(i = 0; i < n; i++) {
        fgets(line, 60, fptr);
        token = strtok(line, s);
        Action[i].op = atoi(token);

        token = strtok(NULL, s);
        Action[i].value = atoi(token);

        if(Action[i].op == 1) {
            arr[i] = Action[i].value;
            asc[i] = arr[i];
        }
        else if(Action[i].op == 2) {
            for(j = 0; j < i; j++) {
                for (p = j + 1; p < n; p++) {
                    if (asc[i] > asc[p]) {
                        mem = arr[i];
                        asc[i] = asc[p];
                        asc[p] = mem;
                    }
                }
            }
            printf("%d\n", arr[Action[i].value-1]);
            for(p = Action[i].value-1; p < i - 1; p++) {
                arr[p] = arr[p + 1];
            }
        }
    }

    return 0;
}

