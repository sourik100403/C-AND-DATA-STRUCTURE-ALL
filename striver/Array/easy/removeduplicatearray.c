#include<stdio.h>
int duplicate(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
     int n=6;
    int arr[6]={1,1,1,2,2,3};
    printf("%d",duplicate(arr,n));
    return 0;
}