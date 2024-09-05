#include<stdio.h>
void printArray(int *a,int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//merge one array
void merge(int arr[],int low,int high,int mid)
{
   int i,j,k,B[100];
   i=low;
   j=mid+1;
   k=low;
   while(i<=mid && j<=high)
   {
    if(arr[i]<arr[j])
    {
        B[k]=arr[i];
        k++;
        i++;
    }
    else
    {
        B[k]=arr[j];
        k++;
        j++;
    }
   }
   while(i<=mid)
   {
    B[k]=arr[i];
    i++;
    k++;
   }
   while(j<=high)
   {
    B[k]=arr[j];
    j++;
    k++;
   }
   for(int i=low;i<=high;i++)
   {
    arr[i]=B[i];
   }
}
void mergeSort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}
int main()
{
    int arrA[]={9,14,4,8,8,4,7,5,7,6};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    printArray(arrA,m);
    mergeSort(arrA,0,m-1);
    printArray(arrA,m);
    return 0;
  
}