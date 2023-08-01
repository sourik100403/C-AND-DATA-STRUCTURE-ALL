#include<Stdio.h>
int fact(int);
int main()
{
	int n,factorial;
	printf("enter the number \n");
	scanf("%d",&n);
	factorial=fact(n);
	printf("the factorial of %d=%d",n,factorial);
	return 0;
}
int fact(int x)
{
	int i;
	int factorial=1;
	for(i=1;i<=x;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
