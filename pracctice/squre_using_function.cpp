#include<stdio.h>
int squre(int,int);
int main()
{
	int n,m,c;
	printf("Enter the number n \n");
	scanf("%d",&n);
	printf("Enter the number m \n");
	scanf("%d",&m);
	c=squre(n,m);
	printf("the squre of %d and %d=%d",n,m,c);
	return 0;
}
int squre(int x,int z)
{
	int i;
	int p=1;
	for(i=1;i<=z;i++)
	p=p*x;
	return p;
}
