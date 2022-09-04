#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="sourik";
	char s2[]="parui";
	strcpy(s1,s2);
	puts(s1);
	puts(s2);
	printf("string=%s\n",s1);
	return 0;	
}
