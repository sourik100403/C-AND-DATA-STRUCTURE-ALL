#include<stdio.h>
int nsum(int i)
{
    if(i==0)
    return 0;
    return i+nsum(i-1);
}
int main()
{
    //nor mal method
    // int n=50;
    // int m=70;
    // int sum=0;
    // for(int i=n;i<=m;i++)
    // {
    //     sum=sum+i;
    // }
    // printf("%d \n",sum);

    //recursion
    printf("%d ",nsum(100));
   

}