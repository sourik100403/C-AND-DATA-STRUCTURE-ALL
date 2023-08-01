#include<stdio.h>
int main()
{
	int m,n,i,sum=0,count=0;
	float avg=0.0;
	printf("enter the value of m \n");
	scanf("%d",&m);
	printf("enter the value of n \n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		sum=sum+i;
		count++;
		avg=/*float*/(sum/count);
	}
	printf("sum of %d to %d =%d \n",m,n,sum);
	printf("avg of %d to %d =%f \n",m,n,avg);
	return 0;
}
