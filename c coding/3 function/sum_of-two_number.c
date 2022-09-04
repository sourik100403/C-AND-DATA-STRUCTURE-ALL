#include<stdio.h>
int sum(int a,int b);
int main()
{
	int num1,num2,sum=0;
	printf("enter first number");
	scanf("%d",&num1);
    printf("enter second number");
	scanf("%d",&num2);	
	sum=(num1+num2);
	printf("sum of %d and %d=%d",num1,num2,sum);
	return 0;
}
int sum(int a,int b)
{
	int result;
	result=a+b;
	return result;
}
