#include <stdio.h>
#include <string.h>

struct student {
   char name[50];
   float mark;
};

int main( ) {

    struct student Student1;
    struct student Student2;

    printf("Enter the name of the 1st student: ");
    scanf("%s", Student1.name);
    printf("Enter his mark: ");
    scanf(" %f", &Student1.mark);

    printf("Enter the name of the 2nd student: ");
    scanf("%s", Student2.name);
    printf("Enter his mark: ");
    scanf(" %f", &Student2.mark);

    if(Student1.mark > Student2.mark) {
        printf("The 1st student has a bigger grade: %s with %f", Student1.name, Student1.mark);
    }

    else if(Student1.mark < Student2.mark) {
        printf("The 2nd student has a bigger grade: %s with %f", Student2.name, Student2.mark);
    }

    else {
        printf("The students have the same grade: %f", Student1.mark);
    }

    return 0;
}
