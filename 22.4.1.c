#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];
    int i, j, n, x, y, X, diff = 100;

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }
    n = i;

    printf("Enter X: ");
    scanf("%d", &X);

    for(i = 0; i < n; i++) {
        for(j = n-1; j >= 0; j--) {
            if(abs(X - (v[i] + v[j])) < diff) {
                diff = abs(X - (v[i] + v[j]));
                x = v[i];
                y = v[j];
            }
        }
    }

    printf("The two numbers are: %d %d", x, y);

    return 0;
}
