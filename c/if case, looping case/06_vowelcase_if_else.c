# include<stdio.h>
int main()
{
	char ch;
	printf("enter any charecter\n");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	printf("\n %c is the vowel", ch);
	else
	printf("\n %c is not a vowel", ch);
	return 0;
	
}
