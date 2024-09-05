#include<stdio.h>
int printArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int mergeSort(int arrA[],int arrB[],int arrC[],int m,int n)
{
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n){
        if(arrA[i]<arrB[j]){
            arrC[k]=arrA[i];
            i++;
            k++;
        }
        else{
            arrC[k]=arrB[j];
            j++;
            k++;
        }
    }
    while(i<m){
        arrC[k]=arrA[i];
            i++;
            k++;
    }
     while(j<n){
        arrC[k]=arrB[j];
            j++;
            k++;
    }
}
int main(){
    int arrA[]={10,12,13};//sorted
    int arrB[]={1,3,4,5,8};//sorted
    int arrC[]={};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    int n=sizeof(arrB)/sizeof(arrB[0]);
    printArray(arrA,m);
    printArray(arrB,n);
    mergeSort(arrA,arrB,arrC,m,n);
    printArray(arrC,m+n);
}