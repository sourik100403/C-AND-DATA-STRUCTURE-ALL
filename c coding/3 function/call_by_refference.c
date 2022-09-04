#include<stdio.h>
void changenumber(int *address)
{
	*address=5677;
	
}
int main()
{
	int a=35,b=67;
	printf("the value of a is %d\n",a);
	changenumber(&a);
	printf("now the valu of a is %d\n",a);
	return 0;
	
}
