# include<stdio.h>
int main() 
{
	int num;
	printf("\n enter any number");
	scanf("%d", &num);
	if(num==0)
	printf("\n the number is equal to zero");
	else if(num>0)
	printf("\n the number is positive");
	else
	printf("\n the number is negetive");
	return 0;

}
