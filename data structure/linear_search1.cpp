#include<stdio.h>
int main()
{
	int a[30],n,i,selement,count=0;
	printf("how many number store in list::\n");
	scanf("%d",&n);
	printf("enter the number one by one ::\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the serching element::\n");
	scanf("%d",&selement);
	for(i=0;i<n;i++)
	{
		if(a[i]==selement)
		{
			printf("%d is locked is %d position\n",selement,i+1);
			break;
		}
//		else
//		printf("%d is not present\n",selement);
	}
	if(i==n)
	{
		printf("%d is not present\n",selement);
	}
	return 0;
}
