#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char S[75];
    int i, j, x, n, num[40];
    int res[40];
    const char s[2] = " ";
    char* token;
    bool bool1;

    FILE *fptr;

    if ((fptr = fopen("cod5.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &n);
    fgets(S, 75, fptr);

    token = strtok(S, s);
    num[0] = atoi(token);

    for(i = 1; i < n; i++) {
        token = strtok(NULL, s);
        num[i] = atoi(token);
    }

    int k = 0;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            bool1 = true;
            if(num[j] == num[i]) {
                for(x = j; x < n-1; x++) {
                    num[x] = num[x + 1];
                }
                n--;
                bool1 = false;
                break;
            }
        }
        if(bool1 == true) {
            res[k] = num[i];
            k++;
        }
    }

    int mem;
    for(i = 0; i < k; i++) {
        for(j = i+1; j < k; j++) {
            if(res[i] > res[j]) {
                mem = res[i];
                res[i] = res[j];
                res[j] = mem;
            }
        }
        printf("%d", res[i]);
    }

    return 0;
}
