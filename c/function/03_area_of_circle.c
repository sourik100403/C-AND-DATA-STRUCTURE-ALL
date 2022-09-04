# include<stdio.h>
float cal_area(float radious);
int main()
{
	float area,radious;
	printf("\n Enter the radious of the circle:");
	scanf("%f", &radious);
	area=cal_area(radious);
	printf("\n area of a circle with radious%f=%f",radious,area);
	return 0;
}
    float cal_area(float radious)
    {
    	return (3.14 * radious * radious);
	}
