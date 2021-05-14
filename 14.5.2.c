#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];
    int i = 0, j, n, K, x, max = -100, min;

    printf("Enter the elements for the vector (enter -100 to finish) \n");
    scanf("%d", &x);
    while(x != -100) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }
    n = i;

    printf("Enter K: ");
    scanf("%d", &K);

    i = 0;
    while(i+K-1 < n) {
        min = 100;
        for(j = i; j < i+K; j++) {
            if(v[j] < min) {
                min = v[j];
            }
        }
        if(min > max) {
            max = min;
        }
        i++;
    }

    printf("The biggest number that is the smallest in a group of %d numbers is %d", K, max);

    return 0;
}
