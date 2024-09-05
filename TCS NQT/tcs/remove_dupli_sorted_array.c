#include<stdio.h>
int remove_dupli(int arr[],int n)
{
    int i=0;
    if(n==0 || n==1)
    {
        return n;
    }
    else{
        for(int j=1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                i++;
                arr[i]=arr[j];
            }
        }
    }
    return i+1;
}
int main()
{
    int arr[]={1,2,10,1,2,2,3,3,3,4,5,6,6,7,7,8,9,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=remove_dupli(arr,n);
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}