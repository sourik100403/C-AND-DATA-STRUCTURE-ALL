#include<stdio.h>
int main()
{
	float c_temp,f_temp;
	printf("enter the temp in centrigrate \n");
	scanf("%f",&c_temp);
	f_temp=(1.8*c_temp+32);
	printf("the temp in farhenheight=%f",f_temp);
	return 0;
}
