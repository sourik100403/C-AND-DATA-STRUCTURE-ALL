# include<stdio.h>
int main()
{
	int num1,num2,num3,big=0;
	printf("\n enter the first number");
	scanf("%d", &num1);
	printf("\n enter the second number");
	scanf("%d", &num2);
	printf("\n enter the third number");
	scanf("%D", &num3);
	if(num1>num2)
	{
		if(num1>num3)
		printf("\n %d is greater than %d and %d", num1,num2,num3);
		else
		printf("\n %d is greater than %d and %d", num3,num1,num2);
	}
	else if(num2>num3)
	printf("\n %d is greater than %d and %d",num2,num1,num3);
	else
	printf("\n %d is greater than %d and %d", num3,num1,num2);
	return 0;
}
