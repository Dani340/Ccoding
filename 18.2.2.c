#include <stdio.h>
#include <string.h>
int BinarySearch(int myarr[],int L,int R,int x) {
    int mid;

    if(R >= L) {
        mid = L + (R - L) / 2;
        if(myarr[mid] == x) {
            return myarr[mid];
        }

        else if(myarr[mid] > x) {
            return BinarySearch(myarr, L, mid - 1, x);
        }

        else {
            return BinarySearch(myarr, mid+1, R, x);
        }
    }

    else {
        return -1;
    }
}

int main()
{
    int myarr[100];
    int mid, L, R, x, N, i, result;

    printf("Enter the number of elements: ");
    scanf("%d",&N);
    printf("Enter %d elements: \n", N);

    for(i=0; i < N; i++) {
        scanf("%d",&myarr[i]);
    }

    printf("Enter x to check if it's in the array: ");
    scanf("%d",&x);

    L = 0;
    R = N-1;

    result = BinarySearch(myarr, L, R, x);
    if(result == x) {
        printf("X is in the array");
    }

    else {
        printf("X is not in the array");
    }

    return 0;
}
