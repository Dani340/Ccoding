#include <stdio.h>
#include <string.h>
#include "student.h"

int main( ) {

    struct student Student1;
    struct student Student[30];
    int i, N;

    printf("Enter the amount of students you want to add: ");
    scanf("%d", &N);
    printf("\n");

    for(i = 1; i <= N; i++) {
        addstudent(Student, i);
        printf("\n");
    }

    return 0;
}
