#include<stdio.h>
int xstrlen(char *);
{
	char arr[]="bambooze";
	int len1,len2;
	len1=xstrlen(arr);
	len2=xstrlen("humanity behaviour");
	printf("length of %s=%d",arr,len1);
	printf("length of %s=%d","humanity behaviour",len2);
	return 0;
}
int xstrlen(char *s)
{
	int length=0;
	while(*s!='/0'){
		length++;
		s++;
	}
	return (length);
}
