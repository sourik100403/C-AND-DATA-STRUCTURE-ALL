#include<stdio.h>
int main()
{
	int i,j;
	int s[4][2]={{1234,56},{7687,98},{768,9809},{87,987}};
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=1;j++)
		printf("%d\n",*(*(s+i)+j));
		printf("\n");
	}
	return 0;
}
