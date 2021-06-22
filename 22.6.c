#include <stdio.h>
#include <math.h>

int peaksearch(int v[], int left, int right) {
    int mid, res, res1;

    mid = (left + right) / 2;
    if (v[mid-1] < v[mid] && v[mid+1] < v[mid]) {
        return mid;
    }
    if(v[mid-1] > v[mid+1]) {
        peaksearch(v, left, right-1);
    }
    else {
        peaksearch(v, left+1, right);
    }
}

int main() {
    int i, j, x, N, peak, v[30];

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }
    N = i;

    peak = peaksearch(v, 0, N-1);
    printf("The peak of the vector is: %d", v[peak]);

    return 0;
}
