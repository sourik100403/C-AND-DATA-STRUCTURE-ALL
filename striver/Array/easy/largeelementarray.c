#include<stdio.h>
int large(int arr[],int n)
{
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
        
    }
    return largest;
}
int main()
{
    int n=6;
    int arr[6]={10,12,13,1,18,43};
    printf("%d",large(arr,n));
    return 0;

}