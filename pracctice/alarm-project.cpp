#include<stdio.h>
int main()
{
	int temp;
	printf("enter the room temperature now \n");
	scanf("%d",&temp);
	if(temp>40){
		printf("alarm\n ");
		printf("hydrogen gas flow where temp is high \n");
		printf("call 100 police and fire briget \n");
	}
	else
	{
		printf("all function stop , can not apply any function");
	}
	return 0;
	
}
