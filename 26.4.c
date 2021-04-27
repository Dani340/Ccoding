#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
    struct stack *p = malloc(sizeof(struct stack));

    p->top = 2;
    p->items[0] = 1;
    p->items[1] = 2;
    p->items[2] = 3;

    if(isFull(p) == true) {
        printf("The list is full!\n");
    }
    else {
        printf("The list is not full\n");
    }

    if(isEmpty(p) == true) {
        printf("The list is empty!\n");
    }
    else {
        printf("The list is not empty\n");
    }

    printAll(p);

}
