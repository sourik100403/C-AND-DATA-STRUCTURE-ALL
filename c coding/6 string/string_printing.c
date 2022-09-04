#include<stdio.h>
void printstr(char str[])
{
	int i;
	while(str[i]!="\0")
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	char str[34];
	gets(str);
	printf("%s\n",str);
	puts(str);
	printstr(str);
	return 0;
	
}

