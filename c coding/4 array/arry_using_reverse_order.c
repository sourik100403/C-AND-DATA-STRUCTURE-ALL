# include<stdio.h>
int main()
{
	int arry1[5],arry2[5],i,j;
	printf("enter the 5 element of arry");
	for(i=0;i<=4;i++)
	scanf("%d",&arry1[i]);
	for(i=0,j=4;i<=4;i++,j--)
	arry2[j]=arry1[i];
	printf("element reverse order is \n");
	for(i=0;i<=4;i++)
	printf("%d\t",arry2[i]);
	return 0;
}
