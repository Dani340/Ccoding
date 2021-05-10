#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main() {
    struct QNode *first = NULL;
    struct QNode *second = NULL;
    struct QNode *third = NULL;
    struct QNode *fourth = NULL;
    struct QNode *q = (struct QNode*)malloc(sizeof(struct QNode));

    first = malloc(sizeof(struct QNode));
    second = malloc(sizeof(struct QNode));
    third = malloc(sizeof(struct QNode));
    fourth = malloc(sizeof(struct QNode));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    q->front = fourth;
    q->rear = first;

    printf("Enter the first digit for your number: ");
    scanf(" %d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf(" %d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf(" %d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf(" %d", &fourth->value);
    printf("\n");

    if(isEmpty(q) == true) {
        printf("The list is empty\n");
    }
    else {
        printf("The list is not empty\n");
    }
}

