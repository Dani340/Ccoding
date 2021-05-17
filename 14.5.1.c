#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];
    int i = 0, j, n, K, x;

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
        x = 1;
        j = i;
        while (j < i+K && v[j] > 0) {
            j++;
        }
        if(j != i+K) {
            printf("%d ", v[j]);
            x = -1;
        }
        if(x >= 0) {
            printf("0 ");
        }
    }

    return 0;
}
