#include<stdio.h>
int main()
{
	int i,j;
	for(i=65;i<=70;i++)
	{
		printf("\n");
		for(j=65;j<=i;j++)
		printf("%c",j);
	}
	return 0;
}
