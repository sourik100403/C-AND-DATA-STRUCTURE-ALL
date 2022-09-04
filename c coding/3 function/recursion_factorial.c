# include<stdio.h>
int factorial(int number);
int main()
{
	int number,fact;
	printf("enter the any number\n");
	scanf("%d",&number);
	fact=factorial(number);
	printf("factorial of %d is %d",number,fact);
	return 0;
}
int factorial(int number)
{
	int f; 
	if(number==0||number==1)
	return 1;
	else
	f=number*factorial(number-1);
	return f;
}
