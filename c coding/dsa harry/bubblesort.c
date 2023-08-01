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
void bubbleSort(int * a,int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        printf("number of step is %d \n",i+1);
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    
}

void bubbleSortAdaptive(int * a,int n)
{
    int temp;
    int isSorted=0;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        printf("number of step is %d \n",i+1);
        isSorted=1;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }

        }
        if(isSorted) return;
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
    bubbleSort(a,n);
    printArray(a,n);
    return 0;
}