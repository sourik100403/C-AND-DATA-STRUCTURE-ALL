# include<stdio.h>
# include<string.h>
int main()
{
	char str[50]="programming in c";
	char *pos;
	pos=strchr(str,'n');
	if(pos)
	printf("\n n is found in str at position %d", (pos-str));
	else
	printf("\n n is not present in the string");
	return 0;\
	
}
