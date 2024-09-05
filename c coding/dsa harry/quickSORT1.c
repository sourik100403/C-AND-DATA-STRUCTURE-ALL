#include<stdio.h>
int printArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int split(int arr[],int low,int high)
{
    int pvot=arr[low];
    int p=low+1;
    int q=high;
    int temp;
    do{
        while(arr[p]<pvot){
            p++;
        }
        while(arr[q]>pvot){
            q--;
        }
        if(p<q){
            temp=arr[p];
            arr[p]=arr[q];
            arr[q]=temp;
        }
    }while(p<q);
            temp=arr[low];
            arr[low]=arr[q];
            arr[q]=temp;
            return q;
}
void quickSort(int arr[], int low, int high)
{
    int position;
    if (low < high)
    {
        position = split(arr, low, high);
        quickSort(arr, low, position - 1);  // sort left array
        quickSort(arr, position + 1, high); // sort right array
    }
}
int main()
{
    int arr[]={10,11,11,10,21,21,1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}