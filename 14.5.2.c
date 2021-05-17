#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int v[10];
    int i = 0, j, n, K, x, max = INT_MIN, min = INT_MAX;

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

    for(i = 0; i+K-1 < n; i++) {
        min = INT_MAX;
        for(j = i; j < i+K; j++) {
            if(v[j] < min) {
                min = v[j];
            }
        }
        if(min > max) {
            max = min;
        }
    }

    printf("The biggest number that is the smallest in a group of %d numbers is %d", K, max);

    return 0;
}
