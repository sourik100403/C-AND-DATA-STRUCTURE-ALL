#include<stdio.h>
int main()
{
	int array[100],search,c,n,count=0;
	printf("enter the size of arry \n");
	scanf("%d",&n);
	printf("enter %d integer \n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("enter the number you search");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search)
		{
			printf("%d is locatked at %d position \n",search,c+1);
			count++;
		}
	}
	if(count==0)
	{
		printf("%d search element not present in list",search);
	}
	else
	{
		printf("%d is present %d times in the array \n",search,count);
	}
	return 0;
}
