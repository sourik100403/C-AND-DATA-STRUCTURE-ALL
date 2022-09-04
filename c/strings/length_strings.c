# include<stdio.h>
int main()
{
	char str[100],i=0,length;
	printf("\n enter the string:");
	gets(str);
	while(str[i]!='\0')
	i++;
	printf("\n the length of the string is : %d", length);
	return 0;
	
}
