#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackLL.h"

int main() {
    struct node *top;
    struct node *p;
    struct node *first = NULL;
    char W[10];
    int i = 1;

    first = malloc(sizeof(struct node));
    top = first;

    printf("Enter the word: ");
    scanf("%s", &W);

    first->value = W[0];

    while(W[i] != '\0') {
        pushchar(&top, W[i]);
        i++;
    }

    while(p != NULL) {
        p = top;
        printf("%c", p->value);
        popchar(&top);
    }

    return 0;
}

