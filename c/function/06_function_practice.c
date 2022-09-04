# include<stdio.h>
int func();
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
    	static int counter=0;
    	return counter;
	}
