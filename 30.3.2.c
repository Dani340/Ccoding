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
    int count, countNval, i, j, arr[10];

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

    for(i = 0; i < 3; ++i) {
        for(j = i+1; j < 3; ++j) {
            if(arr[i] == arr[j]) {
                countNval = deleteNvalNode(&head, arr[j]);
                if(countNval == 1) {
                    printf("The node with value %d repeated itself, now it's deleted!\n", arr[j]);
                }
            }
        }
    }
    count = CountAndPrint(head);
    printf("\nThe length of the linked list is %d \n", count);
}
