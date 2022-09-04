# include<stdio.h>
int main()
{
	int arr1[10],arr2[20],arr3[30];
	int i,n1,n2,m,index=0;
	printf("\n enter the number of elements in the array 1: ");
	scanf("%d", &n1);
	printf("\n\n enter the number of elements of the first array");
	for(i=0;i<n1;i++)
	scanf("%d", &arr1[i]);
	printf("\n enter the number of elements in the array 1: ");
	scanf("%d", &n2);
	printf("\n\n enter the number of elements of the second array");
	scanf("%d", &arr2[i]);
	m=n1+n2;
	for(i=0;i<n1;i++)
	{
		arr3[index]=arr1[i];
		index++;
	}
	for(i=0;i<n2;i++)
	{
		arr3[index]=arr2[i];
		index++;
	}
	printf("\n the merged array is");
	for(i=0;i<m;i++)
	printf("\t arr[%d]=%d", i,arr3[i]);
	return 0;
}
