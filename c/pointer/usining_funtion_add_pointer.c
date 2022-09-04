# include<stdio.h>
void sum(int *a,int *b,int *t);
int main()
{
	int num1,num2,total;
	printf("\n enter the first number ");
	scaf("\n %d", &num1);
	printf("\n enter the second number");
	scanf("\n %d",&num2);
	sum(&num1,&num2,&total);
	printf("\n total=%d",total);
	return 0;
}
void sum(int *a,int *b,int *t)
{
	*t=*a + *b;
}
