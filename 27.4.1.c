#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackLL.h"

int main() {
    struct Node *top;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    int count, pushval;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    top = first;

    printf("Enter the first digit for your number: ");
    scanf(" %d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf(" %d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf(" %d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf(" %d", &fourth->value);
    printf("\n");

    if(isEmpty(&top) == true) {
        printf("The list is empty\n");
    }
    else {
        printf("The list is not empty\n");
    }
    printf("\n");

    printf("Enter the value of the node you want to add: ");
    scanf("%d", &pushval);

    push(&top, pushval);
    printf("\n");

    pop(&top);
    printf("\n");

    peek(&top);
    printf("\n");
}
