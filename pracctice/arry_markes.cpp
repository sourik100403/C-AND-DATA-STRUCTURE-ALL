#include<stdio.h>
int main()
{
	int i,sum=0;
	float avg;
	int markes[10];
	for(i=0;i<=9;i++)
	{
		printf("enter the markes:\n");
		scanf("%d",&markes[i]);
	}
	for(i=0;i<=9;i++)
		sum=sum+markes[i];
		avg=sum/10;
		printf("the average of total markes=%f",avg);
	return 0;
}
