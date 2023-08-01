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
void selectionSort(int * a,int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        printf("number of step is %d \n",i+1);
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
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
    selectionSort(a,n);
    printArray(a,n);
    return 0;
}