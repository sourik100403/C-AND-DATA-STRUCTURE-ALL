# include<stdio.h>
int main()
{
	int i=0,n,arr[20];
	printf("\n enter the number of elements");
	scanf("%d", &n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=", i);
		scanf("%d",&arr[i]);
	}
	printf("\n the arry elements are");
	for(i=0;i<n;i++)
	
		printf("\n arr[%d]=%d", i,arr[i]);	
	return 0;
}
