#include<stdio.h>
void fun(int);
int main()
{
	int a=40;
	fun(a);
	printf("%d \n",a);
	return 0;
}
void fun(int b)
{
	b=60;
	printf("%d \n",b);
	
}
