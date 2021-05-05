#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "stackLL.h"

int main() {
    struct node *top;
    struct node *p;
    struct node *first = NULL;
    char W[10], res;
    int i = 1;

    first = malloc(sizeof(struct node));
    top = first;

    printf("Enter the word: ");
    scanf("%s", &W);

    first->value = W[0];

    for (i = 1; i < strlen(W); i++) {
        pushchar(&top, W[i]);
    }

    while(p != NULL) {
        p = top;
        res = popchar(&top);
        printf("%c", res);
    }

    return 0;
}

