#include<stdio.h>
int GCD(int a,int b);
int main()
{
	int num1,num2,res;
	printf("\n enter the two number:");
	scanf("%d %d", &num1, &num2);
	res=GCD(num1,num2);
	printf("\n GCD of %d and %d=%d", num1,num2,res);
	return 0;
}
    int GCD(int x,int y)
	    {
    	int rem;
    	rem=x % y;
    	if(rem==0)
        return y;
        else
        return (GCD(y,rem));
	}
