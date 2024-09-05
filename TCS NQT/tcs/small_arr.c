#include<stdio.h>
int small_arr(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[]={0,0,3,8,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d is the smallest element of arr",small_arr(arr,n));
    return 0;

}