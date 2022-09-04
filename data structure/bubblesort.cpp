#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int [],int );
int main()
{
	int i,n,a[50];
	printf("enter the how many number sorted::\n");
	scanf("%d",&n);
	if(n>50)
	{
		printf("error");
		exit(0);
	}
	printf("enter the number one by one::\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,n);
	printf("enter the sorted number is ::\n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}

void bubble_sort(int a[],int size)
{
	int temp,i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
