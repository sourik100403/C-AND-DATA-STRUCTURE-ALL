#include<stdio.h>
#include<stdlib.h>
void selection_sort(int[],int);
int main()
{
	int a[50],n,i;
	printf("enter the size of array \n");
	scanf("%d",&n);
	if(n>50)
	{
		printf("error");
		exit(0);
	}
	printf("enter the array element \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	printf("enter the sorted number \n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);	
}
void selection_sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
