# include<stdio.h>
# include<string.h>
int main()
{
	char st1[45]="hell0";
	char *st2="harry";
	int val= strcmp(st1,st2);
	printf("\n now the value is %d", val);
	return 0;
}
