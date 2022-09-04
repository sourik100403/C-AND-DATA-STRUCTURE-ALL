#include<stdio.h>
int sum_of_digit(int);
int main()
{
	int num,sum;
	printf("enter any number");
	scanf("%d",&num);
	sum=sum_of_digit(num);
	printf("sum of %d is %d",num,sum);
	return 0;
}
int sum_of_digit(int n)
{
	int number,reminder;
	if(n!=0)
	{
		reminder=n%10;
		number=reminder+sum_of_digit(n/10);
	}
	else
	return 0;
	return number;
}
