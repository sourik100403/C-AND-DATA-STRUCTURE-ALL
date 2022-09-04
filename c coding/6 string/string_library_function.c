#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="harry";
	char s2[]="harry";//sourik
	char s3[65];
	//puts(strcat(s1,s2));
	//printf("the length of s1 is %d\n",strlen(s1));
	//printf("the length of s2 is %d\n",strlen(s2));
/*	printf("the reverse string is : ");
	puts(strrev(s1));
	printf("the reverse string is : ");
	puts(strrev(s2));*/
	printf("the copy string is : ");
	strcpy(s3,s1);
	puts(s3);
	printf("the returned function of s1 and s2 is %d",strcmp(s1,s2));
	return 0;
}
