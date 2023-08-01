#include<stdio.h>
int leftrotate(int arr[],int n,int d)
{
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];

    }
}
int main()
{
    int n=5;
    int d=2;
    int arr[5]={1,4,5,3,2};
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}