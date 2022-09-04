#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
void push();
void pop();
void display();
int stack[max],top=-1;
int main()
{
	int n,p;
	while(1);
	{
		printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
		printf("enter your choice :");
		scanf("%d",&n);
	switch(n)
	{
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:exit(0);
		 
		default:printf("enter 1 to 4");
	}
  }
}
void push()
{
	int m;
	if(top=max-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("enter the number you want to push");
		scanf("%d",&m);
		top++;
		stack[top]=m;
	}
}
void pop()
{
	int p;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		p=stack[top];
		top--;
	}
	printf("top value is %d",p);
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
	print("%d \n",stack[i]);	
	}
}


