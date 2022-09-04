#include<stdio.h>
void start(int *,int *);
int main()
{
	int sum,avg;
	start(&sum,&avg);
	printf("sum=%d\n avarege=%d\n",sum,avg);
	return 0;
}
void start(int *sum,int *avg)
{
	int n1,n2,n3,n4,n5;
	printf("enter the 5 number \n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	*sum=n1+n2+n3+n4+n5;
	*avg=*sum/5;
}
