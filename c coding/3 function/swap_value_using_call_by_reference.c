#include<stdio.h>
int swap(int *x,int *y)
{
	int temp;
	*x=temp;
	*x=*y;
	*y=temp;
	return 0;
	
}
int main()
{
	int a=35,b=67;
	printf("%d and %d",a,b);
	swap(&a,&b);
	printf("%d and %d",a,b);
	return;
}
