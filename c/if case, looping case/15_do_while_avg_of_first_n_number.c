# include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	float avg=0.0;
	printf("\n enter the value of n:");
	scanf("%d", &n);
	do
	{
		sum=sum+1;
		i=i+1;
	}
	while(i<=n);
	avg=sum/n;
	printf("\n the sum of first %d numbers =%d",n,sum);
	printf("\n the average of first %d numbers=%f",n,avg);
	return 0;
}
