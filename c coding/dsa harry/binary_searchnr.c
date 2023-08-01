#include<stdio.h>
int bin_search(int arr[],int size,int element)
{
    int first=0;
    int last=size-1;
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element)
        {
            first=mid+1;
        }
        else{
            last=mid-1;
        }

    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    int element=20;
   int searchindex= bin_search(arr,size,element);
   (searchindex==-1)? printf("not found"):printf("found %d at %d index",element,searchindex+1);

}