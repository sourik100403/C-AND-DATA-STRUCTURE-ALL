#include<stdio.h>
int main()
{
	int n_num;
	float f_num;
	printf("enter the int number \n ");
	scanf("%d",&n_num);
	f_num=(float)n_num;
	printf("the float value of %d is %0.2f \a",n_num,f_num);
	return 0;
}
