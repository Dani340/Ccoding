#include <stdio.h>
#include <math.h>
int matrix[256][256];

int impartire(int iMin, int iMax, int jMin, int jMax, int array[]) {
    int i, j, array1[64], array2[64], array3[64], array4[64], arraylength;

    if(iMax - iMin == 2 && jMax - jMin == 2) {
        for(i = iMin; i < iMax; i++) {
            for(j = jMin; j < jMax; j++) {
                matrix[i][j] = array[i];
            }
        }
    }

    arraylength = sizeof(array) / sizeof(array[0]);
    for(i = 0; i < arraylength / 4; i++) {
        array1[i] = i;
    }
    for(i = arraylength / 4; i < 2 * arraylength / 4; i++) {
        array2[i] = i;
    }
    for(i = 2 * arraylength / 4; i < 3 * arraylength / 4; i++) {
        array3[i] = i;
    }
    for(i = 3 * arraylength / 4; i < arraylength / 4; i++) {
        array4[i] = i;
    }
    impartire(iMin, iMax/2 - 1, jMin, jMax/2 - 1, array1);
    impartire(iMax/2 , iMax, jMin, jMax/2 - 1, array2);
    impartire(iMin, iMax/2 - 1, jMax/2, jMax, array3);
    impartire(iMax/2 , iMax, jMax/2 , jMax, array4);
 }

int main() {
    int i, j, N, size, x, y;

    printf("Enter the number: ");
    scanf("%d",&N);

    printf("Enter the coord of the element you want to be printed: ");
    scanf("%d",&x);
    scanf("%d",&y);

    size = pow(2, N);

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n%d", matrix[x][y]);

    return 0;
}

