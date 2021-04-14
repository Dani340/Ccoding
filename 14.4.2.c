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
    struct node *fifth = NULL;
    int count, mid=0;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    head = first;

    struct node *p = head;

    printf("Enter the first number: ");
    scanf("%d", &first->value);

    printf("Enter the second number: ");
    scanf("%d", &second->value);

    printf("Enter the third number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth number: ");
    scanf("%d", &fourth->value);

    printf("Enter the fifth number: ");
    scanf("%d", &fifth->value);

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    while(p != NULL) {
        if(mid >= count / 2 + 1 && count % 2 == 1) {
            if(p->value % 2 == 1) {
                printf("The first odd value from the second half of the list is %d\n", p->value);
                deleteNthNode(&head, mid);
                break;
            }
        }
        else if(mid >= count / 2 && count % 2 == 0) {
            if(p->value % 2 == 1) {
                printf("The first odd value from the second half of the list is %d\n", p->value);
                deleteNthNode(&head, mid);
                break;
            }
        }

        p = p->next;
        mid++;
    }

    if(mid == count) {
        printf("There was no odd value in the second half of the list");
        return 0;
    }
    printf("The new linked list is: ");
    CountAndPrint(&head);

}
