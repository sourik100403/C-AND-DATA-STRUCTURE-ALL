# include<stdio.h>
void main()
{
	int ch;
	printf("\n enter any charecter");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			printf("\n %c is a vowel", ch);
			break;
		case 'E':
		case 'e':
			printf("\n %C is a vowel", ch);
			break;
		case 'I':
		case 'i':
			printf("\n %c is a vowel", ch);
			break;
		case 'O':
		case 'o':
			printf("\n %c is a vowel", ch);
			break;
		case 'U':
		case 'u':
			printf("\n %c is a vowel", ch);
			break;
		default: printf("\n %c is not a vowel", ch);
	}
	getch();
}
