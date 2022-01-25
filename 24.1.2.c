#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, n, j, x, y, count = 0, max = -1;
    char mat1[100][100], mat2[100][100];
    char *nstr, *sirstr;
    char S[200];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("vitraliu.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 10, fptr);
    nstr = strtok(S, s);
    n = atoi(nstr);

    for(i = 0; i < n; i++) {
        fgets(S, 100, fptr);
        sirstr = strtok(S, s);
        mat1[i][0] = atoi(sirstr);

        for(j = 1; j < n; j++) {
            sirstr = strtok(NULL, s);
            mat1[i][j] = atoi(sirstr);
        }
    }

    for(i = 0; i < n; i++) {
        fgets(S, 100, fptr);
        sirstr = strtok(S, s);
        mat2[i][0] = atoi(sirstr);

        for(j = 1; j < n; j++) {
            sirstr = strtok(NULL, s);
            mat2[i][j] = atoi(sirstr);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat1[i][j] == 1 && mat2[i][j] == 1) {
                count++;
            }
        }
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = 0; i < n; i++) {
        for(j = n-1; j >= 0; j--) {
            if(mat2[j][i] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = n-1; i >= 0; i--) {
        for(j = n-1; j >= 0; j--) {
            if(mat2[i][j] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(j = n-1; j >= 0; j--) {
        for(i = 0; i < n; i++) {
            if(mat2[i][j] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = 0; i < n; i++) {
        for(j = n-1; j >= 0; j--) {
            if(mat2[i][j] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = n-1; i >= 0; i--) {
        for(j = n-1; j >= 0; j--) {
            if(mat2[j][i] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = n-1; i >= 0; i--) {
        for(j = 0; j < n; j++) {
            if(mat2[j][i] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    count = 0;
    x = 0;
    y = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat2[j][i] == 1 && mat1[x][y] == 1) {
                count++;
            }
            y++;
        }
        x++;
    }
    if(count > max) {
        max = count;
    }
    printf("%d ", count);

    // ------------------------------------------------------ //

    printf("%d", max);

    return 0;
}
