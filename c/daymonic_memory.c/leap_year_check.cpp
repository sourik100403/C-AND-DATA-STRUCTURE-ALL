# include<stdio.h>
int main()
{
	int year;
	printf("\n enter any year :");
	scanf("\n %d", &year);
	if((year%4==0) && (year%100!=0) || (year%400==0))
	printf("\n this year is a leap year");
	else
	printf("\n this year not a leap year");
	return 0;
}
