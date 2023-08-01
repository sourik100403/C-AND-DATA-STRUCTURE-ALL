#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1)
    return n;
    int last=fibonacci(n-1);
    int slast=fibonacci(n-2);
    return last+slast;

}


int main()
{
    //normal
    // int n=6;
    // int n1=0,n2=1,n3;
    // printf("%d %d ",0,1);
    // for(int i=2;i<n;i++)
    // {
    //     n3=n2+n1;
    //     printf("%d ",n3);
    //     n1=n2;
    //     n2=n3;
    // }
    // return 0;


    //recursion 1
    printf("%d ",fibonacci(5));
    
}