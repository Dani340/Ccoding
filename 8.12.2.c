#include<stdio.h>

int main(){

    int a1,a2,b1,b2,r1,r2;
    printf("Enter the first number of the first interval: \n");
    scanf("%d",&a1);
    printf("Enter the second number of the first interval: \n");
    scanf("%d",&a2);
    printf("Enter the first number of the second interval: \n");
    scanf("%d",&b1);
    printf("Enter the second number of the second interval: \n");
    scanf("%d",&b2);


    if((a1>=a2) && (a1>=b1) && (a1>=b2))
        r2=a1;
    else if((a2>=a1) && (a2>=b1) && (a2>=b2))
        r2=a2;
    else if((b1>=a2) && (b1>=a1) && (b1>=b2))
        r2=b1;
    else if((b2>=a2) && (b2>=b1) && (b2>=a1))
        r2=b2;

    if((a1<=a2) && (a1<=b1) && (a1<=b2))
        r1=a1;
    else if((a2<=a1) && (a2<=b1) && (a2<=b2))
        r1=a1;
    else if((b1<=a2) && (b1<=a1) && (b1<=b2))
        r1=a1;
    else if((b2<=a2) && (b2<=b1) && (b2<=a1))
        r1=a1;

    else {
        r1 = a1;
        r2 = a1;
    }

    printf("[%d, %d] is the result", r1, r2);

    return 0;
}
