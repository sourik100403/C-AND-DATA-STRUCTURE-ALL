#include<stdio.h>
int main()
{
    int sum=0;
    int arr[]={3,1,100,100,2,0,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d ",sum);
}