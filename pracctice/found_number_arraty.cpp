#include<stdio.h>
int main()
{
	int array[]={7,8,9,10,35,12,01,8,7,7,7};
	int i,n,count,pos;
	printf("enter the search element \n");
	scanf("%d",&n);
	count=0;
	pos=0;
	for(i=0;i<=10;i++)
	{
		if(array[i]==n)
		count++;
		pos++;
	}
	printf("number %d found %d time pos=%d \n",n,count,pos);
	return 0;
}
