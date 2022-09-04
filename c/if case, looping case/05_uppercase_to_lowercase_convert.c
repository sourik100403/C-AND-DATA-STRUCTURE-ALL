# include<stdio.h>
int main()
{
	int ch;
	printf("\n enter any character");
	scanf("%c", &ch);
	if(ch>='A' && ch<='z');
	printf("\n the entered character is upper case . In the lower case it is:%c", (ch+32));
	
	//printf("enter the lower case character.In the case it is:%c", (ch-32));
	return 0;
}
