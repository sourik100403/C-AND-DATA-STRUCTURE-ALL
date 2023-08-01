#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number \n");
	scanf("%d",&n);
	printf("enter the reverse number is \n");
	while(n!=0)
	{
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
	return 0;
}
