#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

int main( ) {

    struct student Student1;
    struct student Student[30];
    char prenume[10], X[10], Y[10];
    int i, N, result, remove, change;
    float biggest, lowest;

    printf("Enter the amount of students you want to add: ");
    scanf("%d", &N);
    printf("\n");

    for(i = 0; i < N; i++) {
        addstudent(Student, i);
        printf("\n");
    }

    printf("Enter the name of the student you are looking for: ");
    scanf(" %s", &prenume);

    result = look4student(prenume, Student, N);
    if(result >= 0) {
        printf("%s is in the list of students \n", prenume);
    }
    else if(result < -1) {
        printf("%s is not in the list of students \n", prenume);
    }
    printf("\n");

    printf("Enter the name of the student you want to remove: ");
    scanf(" %s", &X);
    printf("\n");

    remove = removestudent(X, Student, N);
    if(remove == 1) {
        for (i = 0; i < N - 1; i++) {
            printstudent(Student, i);
            printf("\n");
        }
    }
    else {
        for (i = 0; i < N; i++) {
            printstudent(Student, i);
            printf("\n");
        }
    }

    printf("Enter the name of the student: ");
    scanf(" %s", &Y);
    printf("\n");

    change = changemark(Y, Student, N);
    if(change == 1) {
        for (i = 0; i < N - 1; i++) {
            printstudent(Student, i);
            printf("\n");
        }
    }

    float * BL = biggestlowestmark(Student, N);
    biggest = BL[0];
    lowest = BL[1];
    printf("The lowest mark is %f \n", lowest);
    printf("The biggest mark is %f", biggest);

    return 0;
}
