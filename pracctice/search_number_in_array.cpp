#include<stdio.h>
int main()
{
	int arr1[10],i;
	int n,count;
	printf("enter the arry element:\n");
	for(i=0;i<=9;i++)
	scanf("%d",&arr1[i]);
	printf("enter the search element:\n");
	scanf("%d",&n);
	count=0;
	for(i=0;i<=9;i++)
	{
		if(arr1[i]==n)
		count++;
	}
	printf("number %d is found %d times in the array\n",n,count);
	return 0;
}
