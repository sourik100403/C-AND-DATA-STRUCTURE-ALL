#include<stdio.h>
int print1TO10(int num,int i)
{
    if(num<=0)
    return 0;
    printf("%d ",num);
    print1TO10(num-1,i);
}
int main()
{
    //regular method
    int n=10;
    // for(int i=1;i<=n;i++)
    // {
    //     printf("%d ",i);
    // }
    //recursion
    print1TO10(n,1);
    return 0;
}