#include<stdio.h>
void printArray(int * a, int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    printf("\n"); 
}
void insertionSort(int * a,int n)
{
    int temp,i,j;
    for (i = 1; i <= n-1; i++)
    {
        /* code */
        temp=a[i];

        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else
            break;
        }
        a[j+1]=temp;
        
    }
    
}
int main()
{
    int a[]={100,20,300,4,500};
    // int a[]={10,20,30,40,50};
    int n=5;
    printArray(a,n);
    printf("sorted array is: \n");
    // bubbleSortAdaptive(a,n);
    insertionSort(a,n);
    printArray(a,n);
    return 0;
}