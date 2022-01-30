#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "C:\Users\danil\OneDrive\Documents\C.Exercises apr\stackLL.h"

int main() {
    struct node *top;
    struct node *p;
    int i, j, n, count = 1, max = -1;
    char *sirstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("paranteze1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);

    n = strlen(sirstr);

    for(i = 0; i < n; i++) {
        count = 1;
        if(sirstr[i] == '{') {
            pushchar(&top, sirstr[i]);
            j = i+1;
            while(sirstr[j] == '{' || sirstr[j] == '(') {
                count++;
                j++;
            }
            if(count > max) {
                max = count;
            }
        }
        else if(sirstr[i] == '}') {
            if(popchar(&top) == '(') {
                printf("-1");
                return 0;
            }
        }
        else if(sirstr[i] == '(') {
            pushchar(&top, sirstr[i]);
            j = i+1;
            while(sirstr[j] == '{' || sirstr[j] == '(') {
                count++;
                j++;
            }
            if(count > max) {
                max = count;
            }
        }
        else if(sirstr[i] == ')') {
            if(popchar(&top) == '{') {
                printf("-1");
                return 0;
            }
        }
        else {
            printf("Not a valid character!");
            break;
        }
    }

    if(isEmptystr) {
        printf("%d", max);
    }
    else {
        printf("-1");
    }

    return 0;
}
