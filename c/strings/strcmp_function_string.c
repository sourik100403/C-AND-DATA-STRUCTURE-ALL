# include<stdio.h>
# include<string.h>
int main()
{
	char str1[50]="hello";
	char str2[50]="hello";
	if(strcmp(str1,str2)==0)
	printf("\n the two string is identical");
	else
	printf("\n the two string is not identical");
	return 0;
}
