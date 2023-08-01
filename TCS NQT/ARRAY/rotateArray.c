#include<stdio.h>
int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int start, int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int rotateArray(int arr[],int n,int k)
{
    //reverse first n-k-1 element
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);

}
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,3,4,5,6,7};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    rotateArray(arr1,n1,2);
    printArray(arr1,n1);
    printf("\n");
    rotateArray(arr2,n2,3);
    printArray(arr2,n2);
}