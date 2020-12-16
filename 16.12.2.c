#include<stdio.h>
#include<math.h>
int main(){

    int x, y, z;

    printf("Enter the first number: \n");
    scanf("%d",&x);

    printf("Enter the second number: \n");
    scanf("%d",&y);

    printf("Enter the third number: \n");
    scanf("%d",&z);

    if(y - x == z - y) {
        printf("It is an arithmetical progression!");
    }
    else {
        printf("It is not an arithmetical progression!");
    }


}

