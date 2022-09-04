#include<stdio.h>
float power(float,int);
int main()
{
	float x,po;
	int y;
	printf("enter the two number");
	scanf("%f %d",&x,&y);
	po=power(x,y);
	printf("%.2f to the power of %d =%.2f\n",x,y,po);
	return 0;
}
float power(float x,int y)
{
	int i;
	float p=1;
	for(i=1;i<=y;i++)
	p=p*x;
	return (p);
}
