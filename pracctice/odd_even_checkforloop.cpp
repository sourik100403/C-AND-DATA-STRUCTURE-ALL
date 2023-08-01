#include<stdio.h>
int main()
{
	int m,n,i;
	printf("enter the number of m \n");
	scanf("%d",&m);
	printf("enter the number of n \n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		printf("%d is even number \n",i);
		else
		printf("%d is odd number \n",i);
	}
	return 0;
}
