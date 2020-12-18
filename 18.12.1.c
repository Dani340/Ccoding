#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, product, product1;

    printf("Enter the length of the first leg:");
    scanf("%lf", &a);
    printf("Enter the length of the second leg:");
    scanf("%lf", &b);

    product = a * a;
    product1 = b * b;
    c = sqrt(product + product1);

    printf("The length of the hypotenuse is %lf \n", c);

}
