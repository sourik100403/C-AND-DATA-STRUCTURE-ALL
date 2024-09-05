#include<stdio.h>
int main()
{
    int arr[]={10,2,3,11,13,23,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=100;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("%d ",i+1);
            i++;
            break;
        }
    }
   
    return 0;
}