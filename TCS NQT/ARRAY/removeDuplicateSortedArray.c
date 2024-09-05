#include<stdio.h>
int duplicate(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int arr[]={1,1,2,3,4,5,5,6,6,7,8,9,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=duplicate(arr,n);
    printf("not repeated array is: \n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" \n size of not repeated arry is :%d",k);
}