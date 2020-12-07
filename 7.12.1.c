#include<stdio.h>
int main(){
    int n,i,x=0;
    printf("Enter the number to check if it's prime:");
    scanf("%d",&n);
    x=n/2;
    for(i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            break;
        }
        else
        {
            printf("Number is prime");
            return 0;
        }
    }
}
