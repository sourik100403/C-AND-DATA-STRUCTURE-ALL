# include<stdio.h>
int main()
{
	struct number
	{
		int a,b,c;
		int largest;
	};
	struct number num;
	printf("\n enter the first number :");
	scanf("\n %d", &num.a);
	printf("\n enter the second number :");
	scanf("\n %d", &num.b);
	printf("\n enter the third number :");
	scanf("\n %d", &num.c);
	if("num.a>num.b && num.a>num.c");
	num.largest=num.a;
	if("num.b>num.a && num.b>num.c");
	num.largest=num.b;
	if("num.c>num.a && num.c>num.b");
	num.largest=num.c;
	printf("\n the largest number is %d",num.largest);
	return 0;
	
}
