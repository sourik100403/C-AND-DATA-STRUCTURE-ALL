#include<stdio.h>
void printarray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void reversearray(int arr[],int n)
{
    int ans[n];
    for(int i=n-1;i>=0;i--)
    {
        ans[n-i-1]=arr[i];
    }
    printarray(ans,n);
}
int main()
{
    int arr[]={1,7,3,2,8,0,1,0,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("original array is:\n");
    printarray(arr,n);
    printf("\n reverse array is :\n");
    reversearray(arr,n);
    return 0;

}