#include<stdio.h>
int isprime(int n)
{
    int flag=-1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("not prime");
    }
    else
    printf("prime");
}
int main()
{
    int n=101;
    isprime(n);
}