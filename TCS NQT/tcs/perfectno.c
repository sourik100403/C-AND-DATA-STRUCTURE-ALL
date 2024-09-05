#include<stdio.h>
int isperfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
}
int main()
{
    isperfect(7);
    return 0;
}