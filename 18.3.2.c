#include <stdio.h>

int partition (int arr[], int low, int high)
{
    int count, j;
    int i = low - 1;

    for (j = low; j <= high - 1; j++) {
        if (arr[j] < arr[high]) {
            i++;
            count = arr[i];
            arr[i]= arr[j];
            arr[j] = count;
        }
    }

    count = arr[i+1];
    arr[i+1]= arr[high];
    arr[high] = count;

    return i+1;
}

int quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int i, N, arr[10];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    printf("Enter an array to sort \n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, (N - 1));

    printf("Sorted array is \n");
    for(i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
