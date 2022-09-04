#include<stdio.h>
void binary_search(int[],int,int,int);
int main()
{
	int list[30],first,last,selement,i,n;
	printf("enter how many number store in list::\n");
	scanf("%d",&n);
	first=0;
	last=n-1;
	printf("enter the value one by one::\n");
	for(i=0;i<=n;i++)
	scanf("%d",&list[i]);
	printf("enter the searching element::\n");
	scanf("%d",&selement);
	binary_search(list,first,last,selement);
	
}
void binary_search(int list[],int first,int last,int selement)
{
	int mid;
	if(first>last)
	printf("not found in the list\n");
	else
	{
		mid=(first+last)/2;
		if(list[mid]==selement)
		{
			printf("found in index %d",mid);
		}
		else if(list[mid]<selement)
		return binary_search(list,mid+1,last,selement);
		else
		return binary_search(list,first,mid-1,selement);
	}
}
