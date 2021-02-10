#include <stdio.h>
#include <stdbool.h>
#include "school.h"

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);
    if(Grades(mark) == true) {
        printf("You passed!");
    }

    else {
        printf("You didn't pass!");
    }

    return 0;
}
