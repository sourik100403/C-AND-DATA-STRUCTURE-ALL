#include<stdio.h>
int main()
{
	int bengali,english,phy,chem,math,agg;
	float percentage;
    printf("enter the five subject number");
    scanf("%d %d %d %d %d",&bengali,&english,&phy,&chem,&math);
	agg=bengali+english+phy+chem+math;
	percentage=agg/5;
	printf("the aggreation value=%d \n",agg);
	printf("the percentage=%f \n",percentage);
	return 0;
}
