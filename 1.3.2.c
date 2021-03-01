#include <stdio.h>

int main() {
    int* pa, a;
    int* pb, b;
    printf("Enter the value of pointer a: ");
    scanf("%d", &a);

    printf("Enter the value of pointer b: ");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    printf("The sum of a and b using pointers is %d \n", *pa + *pb);
    printf("The adress of pointer a is %p \n", pa);
    printf("The adress of pointer b is %p", pb);

    return 0;
}
