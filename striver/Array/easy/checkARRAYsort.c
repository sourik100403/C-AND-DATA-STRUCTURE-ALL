#include<stdio.h>
int issort(int arr[],int n)
{
    int check=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            check=1;
        }
        else
        check=-1;
    }
    if(check==1)
    return 1;
    else 
    return 0;


    //another  method 
     for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
     int n=4;
    int arr[4]={7,2,3,4};
    printf("%d",issort(arr,n));
    return 0;
}