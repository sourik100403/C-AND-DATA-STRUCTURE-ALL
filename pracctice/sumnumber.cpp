#include<stdio.h>
int main()
{
	int n,sum=0,temp;
	printf("enter the number \n");
	scanf("%d",&n);
	//printf("enter sum of \n");
	while(n!=0)
	{
		temp=n%10;
		sum=sum+temp;
		temp=n/10;
	}
	printf("the sum of %d=%d",n,sum);
	return 0;
}
