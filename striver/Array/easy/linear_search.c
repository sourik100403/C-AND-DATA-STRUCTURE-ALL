#include<stdio.h>
int search(int arr[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            return i+1;
        }
    }
    return -1;

}
int main()
{
    int n=5;
    int arr[5]={1,43,12,76,54};
    int selement=599;
    printf("%d",search(arr,n,selement));
}