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
    if(flag==1)
    return 1;
    else
    return 0;
}
int main()
{
    int min=10;
    int max=16;
    for(int i=min;i<=max;i++)
    {
        if(isprime(i)==0)
        {
            printf("%d ",i);
        }
    }
}