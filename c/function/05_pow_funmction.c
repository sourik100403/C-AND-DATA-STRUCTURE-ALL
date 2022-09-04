# include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("\n enter the two number:");
	scanf("%d %d", &num1, &num2);
	result=pow(num1,num2);
	printf("\n result of %d and %d= %d", num1,num2,result);
	return 0;
	
}
