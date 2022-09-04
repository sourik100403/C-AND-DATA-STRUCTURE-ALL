#include<stdio.h>
float num_squre(float);
int main()
{
	float a,squre;
	printf("enter the number :");
	scanf("%f",&a);
	squre=num_squre(a);
	printf("squre of %f is %f \n",a,squre);
	return 0;
}
float num_squre(float x)
{
	float b;
	b=x*x;
	return b;
	
}
