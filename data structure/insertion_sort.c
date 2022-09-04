#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int[],int);
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
	insertion_sort(a,n);
	printf("enter the sorted number \n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);	
}
void insertion_sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<=n-1;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			break;
		}
		a[j+1]=temp;
	}
}
