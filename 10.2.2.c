#include <stdio.h>
#include <stdbool.h>

int produs(int X, int Y) {
    return X * Y;
}

int produsIfPoz(int X, int Y) {
    int PozOrNeg(int X) {
        if(X >= 0) {
            return true;
        }
        else {
            return false;
        }
    }
    if(PozOrNeg(X) == true || PozOrNeg(Y) == true){
        return X * Y;
    }
}

int main() {
    int X, Y;

    printf("Enter X: \n");
    scanf("%d", &X);

    printf("Enter Y: \n");
    scanf("%d", &Y);

    int produsXY = produs(X, Y);
    printf("The multiplication of X and Y is %d \n", produsXY);

    if(produsIfPoz(X, Y) == X * Y) {
        printf("%d", X * Y);
    }

    else {
        printf("Both X and Y are negative");
    }

}
