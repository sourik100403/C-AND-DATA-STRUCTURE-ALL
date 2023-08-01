#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[],int size,int index){
    for (int i =index; i<size-1; i++)
    {
        /* code */
        arr[i]=arr[i+1];
    }

}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int size=10,index=3;
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;

}