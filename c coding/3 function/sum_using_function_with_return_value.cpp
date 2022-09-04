#include<stdio.h>
int calsum(int x,int y);
int main()
{
	int a,b,sum;
	printf("enter the three number:");
	scanf("%d %d",&a,&b);
	sum=calsum(a,b);
	printf("sum is=%d",sum);
	return 0;
}
int calsum(int x,int y)
{
	int d;
	d=x+y;
	return d;
}
