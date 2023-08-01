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
void indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        /* code */
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    


}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int size=10,element=65,index=3;
    display(arr,size);
    indInsertion(arr,size,element,100,index);
    size+=1;
    display(arr,size);
    return 0;

}