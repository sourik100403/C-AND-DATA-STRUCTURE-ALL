# include<stdio.h>
int main()
{
	char str[100], substr[100];
	int i=0,j=0,n;
	printf("\n enter the string :");
	gets(str);
	printf("\n enter the number of charecter to be copied ");
	scanf("%d", &n);
	j=strlen(str)-n;
	while(str[j]!='\0')
	{
		substr[i]=str[j];
		i++,j++;
	}
	substr[i]='\0';
	printf("\n enter the substring is :");
	puts(substr);
	return 0;
}
