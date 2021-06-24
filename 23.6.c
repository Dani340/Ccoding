#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int matrix[10][10];

bool search(int iMin, int iMax, int jMin, int jMax, int x) {
    int mid, imid, jmid;

    imid = (iMin + iMax) / 2;
    jmid = (jMin + jMax) / 2;
    mid = matrix[imid][jmid];
    if (x == mid) {
        return true;
    }
    else if(mid > x) {
        if(jmid-1 >= 0) {
            search(0, iMax, 0, jmid-1, x);
        }
        if(imid-1 >= 0) {
            search(0, imid-1, jmid, jMax, x);
        }
    }
    else {
        if(imid+1 <= iMax) {
            search(imid+1, iMax, 0, jMax, x);
        }
        if(jmid+1 <= jMax) {
            search(0, imid, jmid+1, jMax, x);
        }
    }

    return false;
}

int main() {
    int i, j, x, N;
    bool res;

    printf("Enter the element you want to search for: ");
    scanf("%d", &x);

    printf("Enter the number of rows and cols: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    res = search(0, N-1, 0, N-1, x);
    if(res == true) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}
