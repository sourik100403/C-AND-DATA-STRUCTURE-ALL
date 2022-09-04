# include<stdio.h>
int main()
{
	double radius,area=0.0;
	double *pradius,*parea;
	double *pradius=&radius,*parea=&area;
	printf("\n enter the radius of a circle :");
	scanf("\n %lf", pradius);
	*parea=3.14 * (*pradius) * (*pradius);
	printf("\n the area of a circle is %.2lf=%.2lf", *pradius,*parea);
	return 0;
}
