#include<stdio.h>
int large_arr(int arr[],int n)
{
    int large=arr[0];
    for(int i=0;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    return large;
}
int main()
{
    int arr[]={0,0,3,8,5,6,1000};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d is the smallest element of arr",large_arr(arr,n));
    return 0;

}