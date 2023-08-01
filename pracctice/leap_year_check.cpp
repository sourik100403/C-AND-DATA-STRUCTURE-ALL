#include<stdio.h>
int main()
{
	int year;
	printf("enter the year \n");
	scanf("%d",&year);
	if((year%4==0)&&((year%100!=0)||(year%400==0)))
    printf("the %d is leap year",year);
    else
    printf("this %d not a leap year",year);
    return 0;
}
