#include<stdio.h>
int issum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
}
int main()
{
    int n=5;
    issum(n);
}