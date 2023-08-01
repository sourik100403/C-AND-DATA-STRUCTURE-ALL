#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
	int i;
	int markes[]={55,65,75,56,78,78,90};
	for(i=0;i<=6;i++){
	display1(markes[i]);
    }
	for(i=0;i<=6;i++){
	display2(&markes[i]);
    }
	return 0;
}
void display1(int m)
{
	printf("%d \n",m);
}
void display2(int *n)
{
	printf("%d \n",*n);
}
