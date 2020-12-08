#include<stdio.h>
#include<math.h>
int main(){
    int n,i,x,flag=1;
    printf("Enter the number to check if it's prime: \n");
    scanf("%d",&n);
    x=sqrt(n);
    for(i=2; i <= x; i++) {

        if(n%i==0) {
            flag = 0;
            break;
        }
    }



    if(n==1)
    flag=2;

    else if(n==2)
    flag=1;

    else if(n<1)
    flag=0;

    if (flag == 1) {
        printf("%d is prime", n);
    }
    else if (flag == 2) {
        printf("%d is neither prime, nor composite", n);
    }
    else {
        printf("%d is not prime", n);
    }


    return 0;

}
