# include<stdio.h>
int main()
{
	int num1,num2,num3;
	int *pnum1,*pnum2,*pnum3;
	printf("\n enter the first number :");
	scanf("\n %d", pnum1);
	printf("\n enter the second number :");
	scanf("\n %d", pnum2);
	printf("\n enter the third number :");
	scanf("\n %d", pnum3);
	if(*pnum1>*pnum2 && *pnum1>*pnum3)
	printf("\n %d is a largest number", *pnum1);
	if(*pnum2>*pnum1 && *pnum2>*pnum3)
	printf("\n %d is a largest number ", *pnum2);
	else
	printf("\n %d is a largest number ", *pnum3);
	return 0;
}
