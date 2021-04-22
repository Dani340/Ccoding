#include <stdio.h>

int BS(int v[], int st, int dr) {
    int mijl;

    if (dr >= st) {
        mijl = st + (dr - st) / 2;
    }

    if (v[mijl] == 1 && v[mijl + 1] == 0) {
        return mijl;
    }

    else if (v[mijl] == 0) {
        return BS(v, st, mijl - 1);
    }

    else if(v[mijl] == 1) {
        return BS(v, mijl+1, dr);
    }

}

int main() {
    int v[10], x, i=0;

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }

    int result = BS(v, 0, i - 1);

    printf("There are %d 1's", result+1);
}
