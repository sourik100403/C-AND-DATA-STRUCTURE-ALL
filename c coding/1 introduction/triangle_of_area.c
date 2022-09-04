# include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,area,s;
	printf("\n enter the length of the tringle in three side :");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	scanf("area=%d",area);
	return 0;
}
