#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    float t[20];
    const char s[2] = " ";
    char* token;
    char sA[20], sB[20];
    int i, j, x = 0, nA, nB;
    float xA[20], vA[20], aA[20], xB[20], vB[20], aB[20];

    FILE *fptr;

    if ((fptr = fopen("soldati.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d\n", &nA);
    for(i = 0; i < nA; i++) {
        fgets(sA, 20, fptr);

        token = strtok(sA, s);
        xA[i] = atof(token);

        token = strtok(NULL, s);
        vA[i] = atof(token);

        token = strtok(NULL, s);
        aA[i] = atof(token);
    }

    fscanf(fptr, "%d\n", &nB);
    for(i = 0; i < nB; i++) {
        fgets(sB, 20, fptr);

        token = strtok(sB, s);
        xB[i] = atof(token);

        token = strtok(NULL, s);
        vB[i] = atof(token);

        token = strtok(NULL, s);
        aB[i] = atof(token);
    }

    for(i = 0; i < nA; i++) {
        for(j = i; j < nB; j++) {
            if(aA[i] == 0 && aB[j] == 0) {
                t[x] = (xB[j] - xA[i]) / (vA[i] - vB[j]);
            }
            else {
                t[x] = (-vA[i] + vB[j] + sqrt(pow(vA[i] - vB[j], 2) + 2*(aA[i] - aB[j])*(xB[j] - xA[i]))) / (aA[i] - aB[j]);
            }
            printf("%f", t[x]);
            x++;
        }
    }

    float lowest = t[0];
    for(i = 0; i < x; i++) {
        if(t[i] < lowest) {
            lowest = t[i];
        }
    }

    printf("%f", lowest);

	fclose(fptr);

    return 0;
}
