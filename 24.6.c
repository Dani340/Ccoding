#include <stdio.h>
#include <stdbool.h>

int fpsearch(int v[], int left, int right) {
    int mid, res;

    mid = (left + right) / 2;

    if(right - left <= 1) {
        if (mid == v[mid]) {
            return mid;
        }
        else {
            return -1;
        }
    }

    else {
        if (mid == v[mid]) {
            return mid;
        }
        else if (mid < v[mid]) {
            fpsearch(v, left, right-1);
        }
        else {
            fpsearch(v, left+1, right);
        }
    }
}


int main() {
    int i, j, x, N, res, v[30];

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }
    N = i;

    res = fpsearch(v, 0, N-1);
    if(res == -1) {
        printf("\n-1");
    }
    else {
        printf("\n%d", res);
    }


    return 0;
}
