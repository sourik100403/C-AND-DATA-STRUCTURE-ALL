#include<stdio.h>
int main()
{
	float f_num;
	int n_num;
	printf("enter the float number");
	scanf("%f",&f_num);
	n_num=(int)(f_num);
	printf("the int value of %f=%d",f_num,n_num);
	return 0;
}
