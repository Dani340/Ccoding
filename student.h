struct student {
   int ID[50];
   char nume[50];
   char prenume[50];
   char sex;
   float mark;
};

void addstudent(struct student Student[], int i) {
    struct student StudentNew;

    printf("Enter the name of the %d student: ", i);
    scanf(" %s", StudentNew.prenume);
    printf("Enter the 2nd name of the %d student: ", i);
    scanf(" %s", StudentNew.nume);
    printf("Enter the sex of the %d student: ", i);
    scanf(" %s", StudentNew.sex);
    printf("Enter his mark: ");
    scanf(" %f", &StudentNew.mark);
    Student[i] = StudentNew;
}
