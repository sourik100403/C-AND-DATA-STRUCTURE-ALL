#include<stdio.h>
int main()
{
	int i,sum=0,m,n,temp;
	printf("enter the first number \n");
	scanf("%d",&m);
	printf("enter the last number \n");
	scanf("%d",&n);
	i=temp;
	temp=m;
	i=m;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of %d to %d=%d",m,n,sum);
	return 0;
	
}
