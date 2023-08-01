#include<stdio.h>
int print1TO10(int i,int num)
{
    if(i>num)
    return 0;
    printf("%d ",i);
    print1TO10(i+1,num);
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
    print1TO10(1,n);
    return 0;
}