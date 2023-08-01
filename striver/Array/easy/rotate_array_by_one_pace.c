#include<stdio.h>
int rotateArray(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
    // printf("%d",arr[0]);
}
int main()
{
    int n=4;
    int arr[4]={4,3,2,1};
    printf("%d ",rotateArray(arr,n));

}