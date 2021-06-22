#include <stdio.h>
#include <math.h>
int matrix[256][256];

void impartire(int iMin, int iMax, int jMin, int jMax, int array[]) {
    int i, j, array1[64], array2[64], array3[64], array4[64], arraylength, k = 0;

    if(iMax - iMin == 2 && jMax - jMin == 2) {
        for(i = iMin; i < iMax; i++) {
            for(j = jMin; j < jMax; j++) {
                matrix[i][j] = array[i];
            }
        }
        return;
    }

    arraylength = sizeof(array) / sizeof(array[0]) / 4;
    for(i = 0; i < arraylength; i++) {
        array1[i] = i;
    }
    for(i = arraylength; i < 2 * arraylength; i++) {
        array2[k] = i;
        k++;
    }
    k = 0;
    for(i = 2 * arraylength; i < 3 * arraylength; i++) {
        array3[k] = i;
        k++;
    }
    k = 0;
    for(i = 3 * arraylength; i < 4 * arraylength; i++) {
        array4[k] = i;
        k++;
    }
    impartire(iMin, iMax/2 - 1, jMin, jMax/2 - 1, array1);
    impartire(iMin, iMax/2 - 1, jMax/2, jMax - 1, array2);
    impartire(iMax/2 , iMax - 1, jMin, jMax/2 - 1, array3);
    impartire(iMax/2 , iMax - 1, jMax/2 , jMax - 1, array4);
 }

int main() {
    int i, j, N, size, x, y;
    int array[256];

    printf("Enter the number of cols and rows of the matrix: ");
    scanf("%d",&N);

    printf("Enter the coord of the element you want to be printed: ");
    scanf("%d",&x);
    scanf("%d",&y);

    size = pow(2, N);

    for(i = 0; i < size*size; i++) {
        array[i] = i;
    }
    impartire(0, size, 0, size, array);

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n%d", matrix[x][y]);

    return 0;
}

