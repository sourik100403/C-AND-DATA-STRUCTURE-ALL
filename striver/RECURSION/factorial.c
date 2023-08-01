#include<stdio.h>
int factorial(int i)
{
    if(i==0)return 1;
    if(i<0)return 0;
    return i*factorial(i-1);
}
int main()
{
    int n=5;
    // int fact=1;
    // for(int i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }
    // printf("%d ",fact);
    printf("%d ",factorial(-5));
}