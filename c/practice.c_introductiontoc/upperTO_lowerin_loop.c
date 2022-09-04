# include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any charecter :");
	scanf("\n %c ", &ch);
	if(ch>='A' && ch<='Z')
	
		printf("\n the entered charecter was upper case.lower case is %c",(ch+32));

	else
	    printf("\n the entered charecter is lower case.upper case is %c",(ch-32));
	return 0;
}
