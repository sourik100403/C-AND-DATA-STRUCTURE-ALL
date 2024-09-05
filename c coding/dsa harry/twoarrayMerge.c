#include<stdio.h>
void printArray(int *a,int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int merge(int arrA[],int arrB[],int arrC[],int m,int n)
{
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n)
    {
        if(arrA[i]<arrB[j])
        {
            arrC[k]=arrA[i];
            i++;
            k++;
        }
        else
        {
            arrC[k]=arrB[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        arrC[k]=arrA[i];
        i++;
        k++;
    }
     while(j<n)
    {
        arrC[k]=arrB[j];
        j++;
        k++;
    }
    
}
int main()
{
    int arrA[]={11,23};
    int arrB[]={1,4,9,14,25};
    int arrC[]={};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    int n=sizeof(arrB)/sizeof(arrB[0]);
    merge(arrA,arrB,arrC,m,m);
    printArray(arrC,m+n);
    
}