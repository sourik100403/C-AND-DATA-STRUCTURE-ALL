#include<stdio.h>
int main()
{
	int i=1,mul=1;
	while(i<=10)
	{
		mul=mul*i;
		i++;
	}
	printf("%d \a \t",mul);
	return 0;
}
