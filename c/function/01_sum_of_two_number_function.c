# include<stdio.h>
int sum(int a,int b);
int main()
{
	int num1,num2,total=0;
	printf("\n enter the first number");
	scanf("%d", &num1);
	printf("\n enter the second number");
	scanf("%d", &num2);
	total=sum(num1,num2); // function call.
	printf("\n Total=%d", total);
	return 0;
}
	int sum(int a,int b)
	{
		int result;
		result=a+b;
		return result;
	}
