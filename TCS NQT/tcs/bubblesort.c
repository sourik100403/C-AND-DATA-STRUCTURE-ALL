#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j=size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
int main()
{
    int a[50],n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    if(n>50)
    {
        printf("error");
        exit(0);
    }
     printf("enter the  of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",&a[i]);
    }
    bubble_sort(a,n);
     printf("enter the sort  of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
    
}