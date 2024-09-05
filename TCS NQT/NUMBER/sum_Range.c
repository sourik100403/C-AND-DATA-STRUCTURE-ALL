#include<stdio.h>
int sumRange(int l,int n){
    int sum=0;
    for(int i=l;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
    int l=5,n=9;
    sumRange(l,n);
    return 0;
}