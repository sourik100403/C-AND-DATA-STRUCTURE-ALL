#include<stdio.h>
int printArray(int *a,int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int mergeSort(int arr[],int low,int high,int mid)
{
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j])
        {
            B[k]=arr[i];
            i++;
            k++;
        }
        else{
             B[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=arr[i];
            i++;
            k++;
    }
    while(j<=high){
        B[k]=arr[j];
            j++;
            k++;
    }
    //copy
    for(int i=low;i<=high;i++){
        arr[i]=B[i];
    }

}
int merge(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge(arr,low,mid);
        merge(arr,mid+1,high);
        mergeSort(arr,low,high,mid);
    }
}
int main()
{
    int arr[]={2,65,12,98,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d",n);
    printArray(arr,n);
    merge(arr,0,n-1);
    printArray(arr,n);
    return 0;
}