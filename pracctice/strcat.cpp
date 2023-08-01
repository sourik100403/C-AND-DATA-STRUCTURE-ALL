#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="foliks",target[30]="hello";
	strcat(target,source);
	printf("source=%s\n",source);
	printf("target=%s\n",target);
	return 0;
}
