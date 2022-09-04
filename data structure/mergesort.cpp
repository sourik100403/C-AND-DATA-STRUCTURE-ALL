#include<stdio.h>
void printarry(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("%d \t",a[i]);
    }
    printf("\n");
}

void merge(int a[],int mid,int low,int high)
{
	int i,j,k,B[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			B[k]=a[i];
			i++;
			k++;
		}
		else
		{
			B[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		B[k]=a[i];
		k++;
		i++;
	}
		while(i<=high)
	{
		B[k]=a[j];
		k++;
		j++;
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=B[i];
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,mid,low,high);
	}
}
int main()
{
	int a[]={9,54,87,2,45,90,4,34};
	int n=8;
	printarry(a,n);
	mergesort(a,0,7);
	printarry(a,n);
	return 0;
}
