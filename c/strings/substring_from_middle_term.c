# include<stdio.h>
int main()
{
	char str[100], substr[100];
	int i=0,j=0,n,m;
	printf("\n enter the main string :");
	gets(str);
	printf("\n enter the position from which to start substrting :");
	scanf("%d", &m);
	printf("\n enter the length of the substarting ");
	scanf("%d", & n);
	i=m;
	while(str[i] !='\0' && n>0)
	{
		substr[j]=str[i];
		i++;
		j++;
		n--;
	}
	substr[j]='\0';
	printf("\n enter the substring is :");
	puts(substr);
	return 0;
	
}
