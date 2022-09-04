#include<stdio.h>
#include<math.h>
int main()
{
    float r;
	float pi=3.14;
	float area;
	printf("enter the radious of a circle :");
	scanf("%f",&r);
	area=pi*pow(r,r);
	printf("the area of a circle is =%f",area);
	return 0;
}
