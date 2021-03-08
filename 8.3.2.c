#include <stdio.h>
#include <string.h>
#include <math.h>

struct XnY {
   double X;
   double Y;
};

int main( ) {

    struct XnY point1;
    struct XnY point2;
    double distance;

    printf("Enter the 1st point on OX: ");
    scanf("%lf", &point1.X);
    printf("Enter the 1st point on OY: ");
    scanf("%lf", &point1.Y);

    printf("Enter the 2nd point on OX: ");
    scanf("%lf", &point2.X);
    printf("Enter the 2nd point on OY: ");
    scanf("%lf", &point2.Y);

    distance = sqrt((point2.X - point1.X) * (point2.X - point1.X) - (point2.Y - point1.Y) * (point2.Y - point1.Y));

    printf("The distance is: %.2lf", distance);

    return 0;
}
