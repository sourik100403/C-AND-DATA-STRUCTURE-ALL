#include<stdio.h>
int smallNumber(int arr[])
{
    int small=arr[0];
    for(int i=0;i<4;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}
int main()
{
    int arr1[5]={1,4,65,23,1};
    int arr2[5]={11,12,3,5,4};
    printf("%d \n",smallNumber(arr1));
    printf("%d \n",smallNumber(arr2));
}