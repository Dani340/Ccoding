#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

    struct node *p = head;

    printf("Enter the first digit for your number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);

    while(p->next != NULL && p->next->next != NULL) {
        if(p->next->next->value - p->next->value == p->next->value - p->value) {
            printf("True");
            break;
        }
        else {
            count++;
        }
        p = p->next;
    }
    if(count == 2) {
        printf("False");
    }
}
