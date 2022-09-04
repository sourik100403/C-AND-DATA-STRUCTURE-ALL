# include<stdio.h>
int func();
int counter=10;
int main()
{
	printf("%d", func());
	printf("%d", func());
	printf("%d", func());
	printf("%d", func());
	return 0;
}
    int func()
    {
    	return counter++;
	}
