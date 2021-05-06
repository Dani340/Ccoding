#include <stdio.h>

int main() {
    int x, j, i = 0, n, arr[10], max;

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        arr[i] = x;
        i++;
        scanf("%d", &x);
    }
    n = i;

    for(i = 0; i < n; i++) {
        max = -1;
        for(j = i+1; j < n; j++) {
            if(arr[j] > arr[i]) {
                max = arr[j];
                break;
            }
        }
        printf("%d ", max);

    }

}
