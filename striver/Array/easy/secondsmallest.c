#include<stdio.h>
int sesmallest(int arr[],int n)
{
    int smallest=arr[0];
    int sesmallest=100000;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            sesmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<sesmallest)
        {
            sesmallest=arr[i];
        }
    }
    return sesmallest;
}
int main()
{
     int n=6;
    int arr[6]={10,12,13,1,100,101};
    printf("%d",sesmallest(arr,n));
    return 0;
}