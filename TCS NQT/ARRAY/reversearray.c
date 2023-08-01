#include<stdio.h>
int reverseArray(int arr[],int n)
{
    for(int i=n;i>=1;i--)
    {
        printf("%d ",arr[i-1]);
    }
}
int main()
{
    int arr1[]={1,54,2,3,4};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("%d \n",n);
    reverseArray(arr1,n);

}