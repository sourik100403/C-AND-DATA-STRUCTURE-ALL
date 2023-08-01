#include<stdio.h>
int smallest(int arr[],int n)
{
    int smallest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;

}
int main()
{
    int n=6;
    int arr[6]={10,12,13,1,100,101};
    printf("%d",smallest(arr,n));
    return 0;
}