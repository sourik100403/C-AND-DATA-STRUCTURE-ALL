#include<stdio.h>
#include<stdlib.h>
int quicksort(int[],int,int);
int split(int[],int,int);
int main()
{
	int a[20], n,i,pvot,lower,upper;
	printf("enter the number of terms:\n");
	scanf("%d",&n);
	printf("enter the number one by one::\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	lower=0;
	upper=n-1;
	quicksort(a,lower,upper);
	printf("the sorted array is::\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
int quicksort(int a[],int lower,int upper)
{
	int pos;
	if(lower<upper)
	{
		pos=split(a,lower,upper);
		quicksort(a,lower,pos-1);
		quicksort(a,pos+1,upper);
	}
}
int split(int a[],int lower,int upper)
{
	int pvot,p,q,temp;
	pvot=a[lower];
	p=lower+1;
	q=upper;
	while(p<=q)
	{
		while(a[p]<pvot)
		{
			p++;
		}
		while(a[q]>pvot){
			q--;
		}
		if(p<q)
		{
			temp=a[p];
			a[p]=a[q];
			a[q]=temp;
		}
	}
	temp=a[lower];
	a[lower]=a[q];
	a[q]=temp;
	return(q);
}
