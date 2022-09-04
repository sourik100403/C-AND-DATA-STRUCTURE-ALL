# include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%d", count++);
				}
			printf("\n");
	}
	return 0;
}
