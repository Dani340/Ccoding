struct student {
   int ID[50];
   char nume[10];
   char prenume[10];
   char sex;
   float mark;
};

void addstudent(struct student Student[], int i) {
    printf("Enter the name of the %d student: ", i+1);
    scanf(" %s", Student[i].prenume);
    printf("Enter the 2nd name of the %d student: ", i+1);
    scanf(" %s", Student[i].nume);
    printf("Enter the sex of the %d student: ", i+1);
    scanf(" %c", &Student[i].sex);
    printf("Enter his/her mark: ");
    scanf(" %f", &Student[i].mark);
}

int look4student(char prenume[], struct student Student[], int N) {
    int count1 = 0;

    for(int i = 0; i < N; i++) {
        if(strcmp(Student[i].prenume, prenume) == 0) {
            return -1;
            break;
        }
    }
}

void printstudent(struct student Student[], int i) {
    printf("The ID of the %d student is %s \n", i+1, Student[i].ID);
    printf("The name of the %d student is %s \n", i+1, Student[i].prenume);
    printf("The 2nd name of the %d student is %s \n", i+1, Student[i].nume);
    printf("The sex of the %d student is %c \n", i+1, Student[i].sex);
    printf("His/Her mark is %f \n", Student[i].mark);
}

void removestudent(char X[], struct student Student[], int N) {
    int i;

    for(int i = 0; i < N; i++) {
        if(strcmp(Student[i].prenume, X) == 0) {
            for (int j = i; j < N - 1; j ++) {
                Student[j] = Student[j + 1];
            }
        }
    }

    for (i = 0; i < N - 1; i++) {
        printstudent(Student, i);
        printf("\n");
    }
}
