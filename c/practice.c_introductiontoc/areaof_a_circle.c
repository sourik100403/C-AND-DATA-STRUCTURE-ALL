#include<stdio.h>
int main()
{
	float radious;
	float area;
	int a=3.14;
	printf("\n enter the value of radious :");
	scanf("\n %f", &radious);
	area=a*radious*radious;
	printf("\n area=%.2f",area);
	return 0;
}
