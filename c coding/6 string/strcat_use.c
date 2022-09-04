#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="sourik ";
	char title[]="parui";
	strcat(name,title);
	printf("the name is %s\n",name);
	puts(name);
	return 0;
}
