#include<stdio.h>
int secondlarge(int arr[],int n)
{
    int largest=arr[0];
    int selargest=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            selargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>selargest)
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