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
    for(int i = 0; i < N; i++) {
        if(strcmp(Student[i].prenume, prenume) == 0) {
            return i;
        }
    }
    return -1;
}

void printstudent(struct student Student[], int i) {
    printf("The ID of the %d student is %s \n", i+1, Student[i].ID);
    printf("The name of the %d student is %s \n", i+1, Student[i].prenume);
    printf("The 2nd name of the %d student is %s \n", i+1, Student[i].nume);
    printf("The sex of the %d student is %c \n", i+1, Student[i].sex);
    printf("His/Her mark is %f \n", Student[i].mark);
}

int removestudent(char X[], struct student Student[], int N) {
    int i, result;

    result = look4student(X, Student, N);
    if(result >= 0) {
        for (int j = result; j < N - 1; j ++) {
            Student[j] = Student[j + 1];
        }
        printf("Student removed succesfully \n");
        return 1;
    }
    else {
        printf("The name of the student is not in the list \n");
        return -1;
    }

}

int changemark(char Y[], struct student Student[], int N) {
    int i, result;
    float newmark;

    result = look4student(Y, Student, N);
    if(result >= 0) {
        printf("The name of the student you entered is in the list, enter the new mark: ");
        scanf(" %f", &newmark);
        Student[result].mark = newmark;
        return 1;
    }

    else {
        printf("The name of the student is not in the list! \n");
        return -1;
    }
}

float * biggestlowestmark(struct student Student[], int N) {
    int i;
    float biggest, lowest;

    float * BL = (float*) malloc(sizeof(float) * 2);

    biggest = Student[0].mark;
    lowest = Student[0].mark;
    for(i = 0; i < N; i++) {
        if(biggest < Student[i].mark) {
            biggest = Student[i].mark;
        }
        if(lowest > Student[i].mark) {
            lowest = Student[i].mark;
        }
    }

    *BL = biggest;
    *(BL + 1) = lowest;

    return BL;
}

struct student[] sortbymarks(struct student Student[], int N) {
    int i, j;
    float count1;
    struct student orderer[30];

    memcpy(orderer, Student, sizeof(*Student) * N);

    for(i = 0; i < N; i++) {
        orderer[i].mark = Student[i].mark;
    }

    for (i = 0; i < N; ++i) {
        for (j = i + 1; j < N; ++j) {
            if (orderer[i].mark > orderer[j].mark) {
                count1 =  orderer[i].mark;
                orderer[i].mark = orderer[j].mark;
                orderer[j].mark = count1;
            }
        }

    }

    return orderer;
}
