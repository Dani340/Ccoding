#include <stdio.h>

int main() {
    int* pval, val;
    printf("Enter the value of the pointer: ");
    scanf("%d", &val);

    pval = &val;

    printf("The value of the pointer is %d \n", *pval);
    printf("The adress of the pointer is %p", pval);

    return 0;
}
