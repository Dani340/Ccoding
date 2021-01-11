#include <stdio.h>
#define PI 3.14
int main()
{
  int radius;
  float area, lungime;

  printf("Enter radius of circle \n");
  scanf("%d", &radius);

  area = PI*radius*radius;
  printf("Area of circle is %.2f \n", area);

  lungime = PI*radius*2;
  printf("The length of the circle is %.2f \n", lungime);
  return 0;
}
