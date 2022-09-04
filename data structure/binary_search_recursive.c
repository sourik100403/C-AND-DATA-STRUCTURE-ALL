#include<stdio.h>
void binary_search(int[],int,int,int);
void main()
{
	int list[20],first,last,selement,i,n;
	printf("enter the how many number store in list \n");
	scanf("%d",&n);
	printf("enter the number one by one \n");
	for(i=0;i<n;i++)
	scanf("%d",&list[i]);
	first=0;
	last=n-1;
	printf("enter the search number \n");
	scanf("%d",&selement);
	binary_search(list,first,last,selement);
	getch();
}
void binary_search(int list[],int first,int last,int selement)
{
	int middle;
	if(first>last)
	{
		printf("not found");
	}
	else
	{
		middle=(first+last)/2;
		if(list[middle]==selement)
		{
			printf("found in index %d",middle);
		}
		else if(list[middle]<selement)
		return binary_search(list,middle+1,last,selement);
		else
		return binary_search(list,first,middle-1,selement);
    }
}
		
	
	
	
	

