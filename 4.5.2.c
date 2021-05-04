#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackLL.h"

int main() {
    struct node *top;
    struct node *p;
    char P[10];
    int i = 0, count = 0;

    printf("Enter the sequence: ");
    scanf("%s", &P);

    while(P[i] != '\0') {
        if(P[i] == '(') {
            pushchar(&top, P[i]);
            i++;
        }
        else if(P[i] == ')') {
            if(top->value == '(') {
                popchar(&top);
                count++;
            }
            else {
                count = 0;
                break;
            }
            i++;
        }
    }

    if(count == 0) {
        printf("False");
    }
    else {
        printf("True");
    }

}
