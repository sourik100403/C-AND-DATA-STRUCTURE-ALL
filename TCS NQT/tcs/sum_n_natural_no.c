#include<stdio.h>
int main()
{
    int n=6;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of first %d is = %d",n,sum);
    return 0;
}