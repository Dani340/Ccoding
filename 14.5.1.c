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

    i = 0;
    while(i+K-1 < n) {
        x = 1;
        for(j = i; j < i+K; j++) {
            if(v[j] < 0) {
                printf("%d ", v[j]);
                x = v[j];
            }
        }
        if(x >= 0) {
            printf("0 ");
        }
        i++;
    }

    return 0;
}
