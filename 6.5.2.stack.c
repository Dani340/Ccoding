#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
    int arr[10], i = 0, n, top, next, x;
    struct stack *p = malloc(sizeof(struct stack));
    p->top = -1;

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        arr[i] = x;
        i++;
        scanf("%d", &x);
    }
    n = i;

    push(p, arr[0]);

    for (i = 1; i < n; i++) {
        next = arr[i];

        if (isEmpty(p) == false) {
            top = pop(p);

            while (top < next) {
                printf("%d ", next);
                if (isEmpty(p) == true) {
                    break;
                }
                top = pop(p);
            }

            if (top > next) {
                push(p, top);
            }
        }

        push(p, next);
    }

    while (isEmpty(p) == false) {
        top = pop(p);
        next = -1;
        printf("%d ", next);
    }
}
