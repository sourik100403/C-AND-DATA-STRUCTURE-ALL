#include<stdio.h>
int main()
{
	int num,*pnum;
	pnum=&num;
	printf("\n enter the number is");
	scanf("%d",&num);
	printf("\n enter the number that was entered is : %d",*pnum);
	printf("\n the address of the number in memory is :%u",&num);
	return 0;
}
