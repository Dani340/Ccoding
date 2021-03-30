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
    int count, i, arr[10];

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
    arr[0] = first->value;

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);
    arr[1] = second->value;

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);
    arr[2] = third->value;

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);
    arr[3] = fourth->value;

    for(i = 0; i < 4; i++) {
        if(arr[i+2] - arr[i+1] == arr[i+1] - arr[i]) {
            printf("True");
            break;
        }
        else {
            count++;
        }
    }
    if(count == 4) {
        printf("False");
    }
}
