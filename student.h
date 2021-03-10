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
    printf("Enter his mark: ");
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
