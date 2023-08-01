#include<stdio.h>
int main()
{
	int array[5],array2[5],i,j;
	printf("enter the number \n");
	for(i=0;i<5;i++)
	scanf("%d",&array[i]);
	printf("the reverse order :\n");
	for(i=4;i>=0;i--)
	printf("%d \t",array[i]);
	return 0;
}
