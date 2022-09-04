#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	File*ptr==NULL;
	char string[100];
	ptr=fopen("read","r");
	fscanf(ptr,"%s",string);
	printf("the content is now::  %s \n",string);
	return 0;
}
