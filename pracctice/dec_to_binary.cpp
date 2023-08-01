#include<stdio.h>
int calsum(int,int,int);
int main()
{
	int a,b,c,sum;
	printf("enter the value of a,b,c \n");
	scanf("%d %d %d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("the total sum=%d",sum);
	return 0;
}
int calsum(int x,int y,int z)
{
	int d;
	d=x+y+z;
	return d;
}
