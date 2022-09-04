#include<stdio.h>
void binary_search(int[],int,int,int);
void main()
{
	int list[10],i,first,last,n,selement;
	printf("enter the how many number store \n");
	scanf("%d",&n);
	printf("enter the number one by one \n");
	for(i=0;i<n;i++)
	scanf("%d",&list[i]);
	first=0;
	last=n-1;
	printf("enter the search element \n");
	scanf("%d",&selement);
	binary_search(list,first,last,selement);
	getch();
	
}
void binary_search(int list[],int first,int last,int selement)
{
	int middle;
	while(first<=last)
	{
		middle=(first+last)/2;
		if (list[middle]==selement)
		{
			printf("element found in index %d",middle);
			break;
		}
		else if(list[middle]<selement)
			first=middle+1;
		else
		last=middle-1;
		if(first>last)
		printf("not found search element");
	}
}
