#include <stdio.h>
#include <string.h>
#include "student.h"

int main( ) {

    struct student Student1;
    struct student Student[30];
    char prenume[10];
    int i, N, result;

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
    if(result == -1) {
        printf("%s is in the list of students", prenume);
    }
    else {
        printf("%s is not in the list of students", prenume);
    }

    return 0;
}
