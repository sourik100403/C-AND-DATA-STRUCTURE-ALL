#include<stdio.h>
int largeNumber(int arr[])
{
    int large=arr[0];
    for(int i=0;i<4;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}
int main()
{
    int arr1[5]={1,4,65,23,1};
    int arr2[5]={11,12,3,5,4};
    printf("%d \n",largeNumber(arr1));
    printf("%d \n",largeNumber(arr2));
}