#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

int main() {
    struct student Student[30];
    char prenume[10], X[10], Y[10];
    int i, N, result, remove, change, choice=-1;
    float biggest, lowest;

    printf("Enter the amount of students you want to add: ");
    scanf("%d", &N);
    printf("\n");

    for(i = 0; i < N; i++) {
        addstudent(Student, i);
        printf("\n");
    }

    while(choice != 0) {
        printf("Enter the number of the operation you want to execute (1-7): ");
        scanf("%d", &choice);
        if(choice == 1) {
            addstudent(Student, i);
            printf("\n");
        }
        else if(choice == 2) {
            printf("Enter the name of the student you are looking for: ");
            scanf(" %s", prenume);

            result = look4student(prenume, Student, N);
            if(result >= 0) {
                printf("%s is in the list of students \n", prenume);
            }

            else if(result < 0) {
                printf("%s is not in the list of students \n", prenume);
            }
            printf("\n");
        }
        else if(choice == 3) {
            printf("Enter the name of the student you want to remove: ");
            scanf(" %s", X);
            printf("\n");

            remove = removestudent(X, Student, N);
            if(remove == 1) {
                for (i = 0; i < N - 1; i++) {
                    printstudent(Student, i);
                    printf("\n");
                }
            }
            else {
                printf("No changes were made \n");
                printf("\n");
            }
        }
        else if(choice == 4) {
            printf("Enter the name of the student: ");
            scanf(" %s", Y);
            printf("\n");

            change = changemark(Y, Student, N);
            if(change == 1) {
                for (i = 0; i < N; i++) {
                    printstudent(Student, i);
                    printf("\n");
                }
            }
            else {
                printf("No changes were made \n");
                printf("\n");
            }
        }
        else if(choice == 5) {
            printf("All of the students are: \n");
            printf("\n");
            for(i = 0; i < N; i++) {
                printstudent(Student, i);
                printf("\n");
            }
            printf("\n");
        }
        else if(choice == 6) {
            float * BL = biggestlowestmark(Student, N);
            biggest = BL[0];
            lowest = BL[1];
            printf("The lowest mark is %f \n", lowest);
            printf("The biggest mark is %f \n", biggest);
            printf("\n");
        }
        else if(choice == 7) {
            struct student orderer[30] = sortbymarks(Student, N);

            printf("Sorted array is: ");
            for (i = 0; i < N; i++) {
                printf("%d with %f", orderer[i].prenume, orderer[i].mark);
            }
            printf("\n \n");
        }
        else {
            printf("You didn't enter a number 1-7 \n");
        }
    }
}
