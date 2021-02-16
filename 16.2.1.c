#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[10][10], matrix1[10][10];
    int p,q;

    printf("Enter p: ");
    scanf("%d",&p);
    printf("Enter q: ");
    scanf("%d",&q);

    if(p == 1) {
       p = true;
    }

    else if(p == 0) {
        p = false;
    }

    else {
        printf("You didn't enter neither 0 nor 1!");
    }

    if(q == 1) {
       q = true;
    }

    else if(q == 0) {
        q = false;
    }

    if(!(p && q) == !p || !q) {
        printf("!(p ^ q) == !p v !q ; true \n");
    }

    else {
        printf("!(p ^ q) != !p v !q ; false \n");
    }

    if(!(p || q) == (!p && !q)) {
        printf("!(p v q) == !p ^ !q ; true");
    }

    else {
        printf("!(p v q) != !p ^ !q ; false");
    }

    return 0;
}
