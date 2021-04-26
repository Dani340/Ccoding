#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
    struct stack *p = malloc(sizeof(struct stack));

    p->top = -1;

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


}
