#include<stdio.h>
int main()
{
	int n,i,k=0,j;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i+=2)
	{
		for(j=1;j<=2*n-1;j+=2){
			printf("%d \t",(k+j)%(2*n));
		}
		printf("\n");
		k=(k+2)%(2*n);
	}
	return 0;
}
