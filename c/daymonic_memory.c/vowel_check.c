# include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any charecter :");
	scanf("\n %c", &ch);
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n %c is a vowel",ch);
	}
	else
        	printf("\n %c is not a vowel");
	return 0;
}

