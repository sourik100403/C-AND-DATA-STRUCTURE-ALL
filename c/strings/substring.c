# include<stdio.h>
int main()
{
	char str[100],substr[100];
	int i=0,n;
	printf("\n enter the string :");
	gets(str);
	printf("\n enter the number of character to be copied :");
	scanf("%d", &n);
	i=0;
	while(str[i]!='\0' && i<n)
	{
		substr[i]=str[i];
		i++;
	}
	substr[i]='\0';
	printf("\n the substring is :");
	puts(substr);
	return 0;
}
