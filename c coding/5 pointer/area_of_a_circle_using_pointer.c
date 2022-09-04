#include<stdio.h>
void areaperi(int,float *,float *);
int main()
{
	int radious;
	float area,perimiter;
	printf("enter the radious\n");
	scanf("%d",&radious);
	areaperi(radious,&area,&perimiter);
	printf("area=%f\n perimiter=%f\n",area,perimiter);
	return 0;
}
void areaperi(int r,float *a,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
