#include<stdio.h>
#include<math.h>
int main(){

    int n;
    float x;

    printf("Enter the number: \n");
    scanf("%d",&n);

    x = sqrt(n);
    if(x == (int)x) {
        printf("%d is a perfect square", n);
    }
    else {
        printf("%d is not a perfect square", n);
    }



    return 0;

    }
