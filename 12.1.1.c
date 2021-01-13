#include <stdio.h>
#define PI 3.14
float Length(int radius)
{
    return PI*radius*2;
}

float Area(int radius)
{
    return PI*radius*radius;
}


int main()
{
    int radius, count;
    float area, length;

    printf("Enter the radius of circle \n");
    scanf("%d", &radius);

    printf("Enter 1 or 2: 1 is the length of the circle and 2 is the area of the circle  \n");
    scanf("%d", &count);

    if(count == 1) {
        length = Length(radius);
        printf("The length of the circle is %.2f \n", length);
    }

    else if(count == 2) {
        area = Area(radius);
        printf("The area of the circle is %.2f \n", area);
    }

    else {
        printf("You didn't enter 1 nor 2! \n");
    }

    return 0;
}
