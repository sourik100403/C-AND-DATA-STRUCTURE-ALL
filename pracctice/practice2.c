#include<stdio.h>
int main()
{
	float bs,da,ra,gs;
	printf("enter the basic salary");
	scanf("%f",&bs);
	da=0.4*bs;
	ra=0.2*bs;
	gs=bs+da+ra;
	printf("the bs=%f \n",bs);
	printf("the da=%f \n",da);
	printf("the ra=%f \n",ra);
	printf("the gross salary=%0.2f \n \a",gs);
	return 0;
	
}
