# include<stdio.h>
int greater(int a,int b,int c);// function prototype
int main()
{
	int num1,num2,num3,large=0;
	printf("\n Enter the first number");
	scanf("%d", &num1);
	printf("\n Enter the second number");
	scanf("%d", &num2);
	printf("\n Enter the third number");
	scanf("%d", &num3);
	large=greater(num1,num2,num3);// call function
	printf("\n largest number=%d", large);
}
    int greater(int a,int b,int c)
    {
    	if(a>b &&  a>c)
    	return a;
    	if(b>a && b>c)
    	return b;
    	else
    	return c;
	}
