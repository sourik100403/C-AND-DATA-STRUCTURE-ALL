#include<stdio.h>
int main()
{
	float km,m,foot,inch,cm;
	printf("enter the two citis distance in km");
	scanf("%f",&km);
	m=km/1000;
	cm=m*100;
	inch=cm/2.54;
	foot=inch/12;
	printf("distance in m=%f \n \a",m);
	printf("distance in cm=%f \n \a",cm);
	printf("distance in inch=%f \n \a",inch);
	printf("distance in foot=%f \n \a",foot);
	return 0;
}
