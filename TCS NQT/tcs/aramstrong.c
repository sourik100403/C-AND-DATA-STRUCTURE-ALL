#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("%d is aramstrong",temp);
    }
    else{
        printf("%d is not aramstrong",temp);
    }
}