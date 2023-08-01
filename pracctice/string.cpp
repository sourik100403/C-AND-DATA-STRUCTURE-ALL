#include<stdio.h>
int main()
{
	char name[]="sourik";
	char *ptr;
	ptr=name;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n");
	//printf("the size of name=%d",sizeof(name));
	return 0;
}
