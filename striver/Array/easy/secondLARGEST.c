#include<stdio.h>
int secondlarge(int arr[],int n)
{
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }   
    }
    int selargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>selargest && arr[i]!=largest)
        {
            selargest=arr[i];
        }
    }
    return selargest;
}
int main()
{
    int n=6;
    int arr[6]={10,12,13,1,100,101};
    printf("%d",secondlarge(arr,n));
    return 0;

}