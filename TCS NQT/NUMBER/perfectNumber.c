#include<stdio.h>
int isperfect(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("is perfect");
    }
    else
    printf("not perfect");
}
int main()
{
    int n=28;
    isperfect(n);
    return 0;
}