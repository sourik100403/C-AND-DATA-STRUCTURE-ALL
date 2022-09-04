# include<stdio.h>
# include<string.h>
int main()
{
	char st1[45]="hello,";
	char *st2="how are you?";
	strcat(st1,st2);
	printf("\n now the st1 is : %s", st1);
	return 0;
}
