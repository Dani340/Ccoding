#include <stdio.h>

int main() {
    int v1[10], x, v2[10], y, v3[10], z, i=0, j=0, k=0, n1, n2, n3;

    printf("Enter the elements for the first vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v1[i] = x;
        i++;
        scanf("%d", &x);
    }
    n1 = i;

    printf("Enter the elements for the second vector (enter -1 to finish) \n");
    scanf("%d", &y);
    while(y != -1) {
        v2[j] = y;
        j++;
        scanf("%d", &y);
    }
    n2 = j;

    printf("Enter the elements for the third vector (enter -1 to finish) \n");
    scanf("%d", &z);
    while(z != -1) {
        v3[k] = z;
        k++;
        scanf("%d", &z);
    }
    n3 = k;

    i = 0;
    j = 0;
    k = 0;
    printf("The numbers that are in all of the vectors are: ");
    while(i != n1) {
        if(k == n3 || j == n2) {
            break;
        }
        while(j != n2) {
            while(k != n3) {
                if(v1[i] == v2[j] == v3[k]) {
                    printf("%d ", v2[j]);
                    printf("%d", i);
                    i++;
                    j++;
                    k++;
                }
                else if(v1[i] < v2[j]) {
                    i++;
                }
                else if(v2[j] < v1[i]) {
                    j++;
                }
                else if(v1[i] < v3[k]) {
                    i++;
                }
                else if(v2[j] < v3[k]) {
                    j++;
                }
                else if(v3[k] < v1[i]) {
                    k++;
                }
                else if(v3[k] < v2[j]) {
                    j++;
                }

            }
        }
    }

    return 0;
}

