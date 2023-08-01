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
	while(first<=last)
	{
		middle=(first+last)/2;
		if(list[middle]==selement)
		{
			printf("found the number in index %d \n",middle);
			break;
		}
		else if(list[middle]<selement)
		first=middle+1;
		else
		last=middle-1;
		if(first>last)
		printf("this number not found in this list \n");
	}
}
