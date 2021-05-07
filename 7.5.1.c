#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackLL.h"

int main () {
    char str[25];
    char s[2] = " ";
    struct nodestr *top;
    struct nodestr *p;
    char *token;
    p = malloc(sizeof(struct nodestr));

    printf("Enter the string: ");
    gets(str);

    token = strtok(str, s);
    pushstr(&top, token);

    displaystr(top);
    printf("\n");

    while(token != NULL) {
        if(strcmp(token, top->value) == 0) {
            popstr(&top);
        }
        else {
            pushstr(&top, token);
        }
        token = strtok(NULL, s);
    }

    displaystr(top);
}

