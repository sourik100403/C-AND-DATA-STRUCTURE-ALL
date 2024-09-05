#include<stdio.h>
void reve(int arr1[],int n)
{
    n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=n;i>=0;i--)
    {
        printf("%d ",arr1[i]);
    }
}
int main()
{
    int arr[10]={1,1,2,4,5,6,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int second_small=0;
    int small=arr[0];
    for(int i=1;i<len;i++)
    {
        if(small!=arr[i])
        {
            second_small=arr[i];
            break;
        }
    }
    printf("%d %d",small,second_small);
    reve(arr,len);
    return 0;
}