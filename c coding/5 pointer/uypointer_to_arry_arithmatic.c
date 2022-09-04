#include<stdio.h>
int main()
{
	int a=7;
	int *ptra=&a;
	ptra+=2;
	printf("%d\n",ptra);
	printf("%d\n",ptra+1);
	printf("%d\n",ptra+2);
	printf("%d",ptra-1);
	return 0;
}
