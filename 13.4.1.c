#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    int N;
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    int count;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    head = first;

    printf("Enter the first digit for your number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);

    printf("\n");

    if(CircularList(&head) == 0) {
        printf("The list is circular");
    }
    else {
        printf("The list is not circular");
    }

    return 0;
}
