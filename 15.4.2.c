#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, N, rest, arr[20];

    printf("Enter the number of elements for the array: ");
    scanf("%d", &N);

    printf("Enter the elements\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < N; i++) {
        if(arr[i] % 2 == 1) {
            for(j = i+1; j < N; j++) {
                if(arr[j] % 2 == 0) {
                    rest = arr[i];
                    arr[i] = arr[j];
                    arr[j] = rest;
                    break;
                }
            }
        }
    }
    printf("The ordered list is: ");
    for(i = 0; i < N; i++) {
        if(arr[i] % 2 == 1) {
            for(j=i+1; j < N; j++) {
                if(arr[j] % 2 == 1 && arr[j] < arr[i]) {
                    rest = arr[i];
                    arr[i] = arr[j];
                    arr[j] = rest;
                }
            }
        }
        printf("%d ", arr[i]);
    }
}
