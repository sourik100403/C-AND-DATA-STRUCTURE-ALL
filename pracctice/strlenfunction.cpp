#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="bambooze";
	int len1,len2;
	len1=strlen(name);
	len2=strlen("humanity behave");
	printf("length of %s = %d\n",name,len1);
	printf("length of %s=%d\n","humanity behave",len2);
	return 0;
}
