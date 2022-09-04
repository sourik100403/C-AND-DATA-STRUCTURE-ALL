# include<stdio.h>
int exp_rec(int,int);
int main()
{
	int num1,num2,res;
	printf("\n enter the two number:");
	scanf("%d %d", &num1,&num2);
	res=exp_rec(num1,num2);
	printf("\n exp of %d and %d= %d", num1,num2,res);
	return 0;
}
    int exp_rec(int x, int y)
    {
    	if(y==0)
    	return 1;
    	else
    	return (x *exp_rec(x,y-1));
	}
