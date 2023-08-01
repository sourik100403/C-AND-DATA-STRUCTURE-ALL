#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=4;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d",count++);
	}
	return 0;
}
