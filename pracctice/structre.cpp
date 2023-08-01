#include<stdio.h>
int main()
{
	char name[3];
	float pages[3];
	int rate[3];
	printf("enter the book name,number of pages,rate of book :\n");
	for(int i=0;i<=2;i++)
	{
		scanf("%c %f %d \n",&name[i],&pages[i],rate[i]);
	}
	printf("and this is what you entered:\n");
	for(int i=0;i<=2;i++)
	printf("%c %f %d \n",&name[i],pages[i],rate[i]);
	return 0;
	
}
