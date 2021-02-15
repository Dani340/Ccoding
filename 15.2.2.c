#include <stdio.h>

int main()
{
    int arr[100];
    int i,N,biggest=-10,lowest=100;
    float Ma;

    printf("Enter the number of elements: ");
    scanf("%d",&N);
    printf("Enter %d elements (not lower than -9 or bigger than 100): \n", N);

    for(i=0; i < N; i++) {
        scanf("%d",&arr[i]);
        if(arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    for(i=0; i < N; i++) {
        if(lowest > arr[i]) {
            lowest = arr[i];
        }
    }

    Ma = (biggest + lowest) / 2;
    printf("The result is %f \n", Ma);
}
