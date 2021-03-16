#include <stdio.h>
#include <string.h>
#include <math.h>

struct date {
   int day;
   int month;
   int year;
};

struct event {
   char name[20];
   struct date startDate;
   struct date endDate;
};

int main( ) {

    int N, i;
    struct event Event[30];

    printf("Enter the number of events: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("\nEnter the name of the %d event: ", i+1);
        scanf("%s", Event[i].name);

        printf("\nEnter the day of the start date of the %d event: ", i+1);
        scanf("%d", &Event[i].startDate.day);

        printf("\nEnter the month of the start date of the %d event: ", i+1);
        scanf("%d", &Event[i].startDate.month);

        printf("\nEnter the year of the start date of the %d event: ", i+1);
        scanf("%d", &Event[i].startDate.year);

        printf("\nEnter the day of the end date of the %d event: ", i+1);
        scanf("%d", &Event[i].endDate.day);

        printf("\nEnter the month of the end date of the %d event: ", i+1);
        scanf("%d", &Event[i].endDate.month);

        printf("\nEnter the year of the end date of the %d event: ", i+1);
        scanf("%d", &Event[i].endDate.year);
    }

    for(i = 0; i < N; i++) {
        printf("\nThe name of the %d event is %s\n", i+1, Event[i].name);

        printf("\nThe day of the start date of the %d event is %d\n", i+1, Event[i].startDate.day);

        printf("\nThe month of the start date of the %d event is %d\n", i+1, Event[i].startDate.month);

        printf("\nThe year of the start date of the %d event is %d\n", i+1, Event[i].startDate.year);

        printf("\nThe day of the end date of the %d event is %d\n", i+1, Event[i].endDate.day);

        printf("\nThe month of the end date of the %d event is %d\n", i+1, Event[i].endDate.month);

        printf("\nThe year of the end date of the %d event is %d\n", i+1, Event[i].endDate.year);
        printf("\n");
    }


    return 0;
}
