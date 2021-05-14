#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main() {
    struct QNode *first = NULL;
    struct QNode *second = NULL;
    struct QNode *third = NULL;
    struct QNode *fourth = NULL;
    struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
    int valueenq, valuedeq, peekval;

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
    printf("\n");

    printf("Enter the value you want to add: ");
    scanf("%d", &valueenq);
    enQueue(q, valueenq);
    printf("\n");

    print(q->rear);
    printf("\n");

    valuedeq = deQueue(q);
    if(valuedeq == -1) {
        printf("The queue is empty\n");
    }
    else {
        printf("The value %d was deleted from the front of the queue\n", valuedeq);
    }
    printf("\n");

    peekval = peek(q);
    if(peekval == -1) {
        printf("The list is empty");
    }
    else {
        printf("The value from the front of the queue is %d", peekval);
    }

}

