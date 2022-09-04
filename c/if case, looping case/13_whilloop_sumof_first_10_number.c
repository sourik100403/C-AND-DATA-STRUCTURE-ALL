# include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+1;
		i=i+1; //update condition
	}
	printf("\n sum= %d", sum);
	return 0;
}
