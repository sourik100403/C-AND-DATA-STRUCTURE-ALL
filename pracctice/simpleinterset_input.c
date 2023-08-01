#include<stdio.h>
int main()
{
	int n,p;
	float r,si;
	printf("enter the value of n,p,r \n");
	scanf("%d %d %f",&n,&p,&r);
	si=(n*p*r)/100;
	printf("the value of %f",si);
	return 0;
}
