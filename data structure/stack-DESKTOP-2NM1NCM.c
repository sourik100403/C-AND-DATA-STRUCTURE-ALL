#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Max 5
int stack[Max],top=-1;
void push();
void pop();
void display();
int main()
{
	int n,p;
	while(1)//infinite loop
	{
		printf(" 1. to push \n 2. to pop \n 3. to display \n 4. to exit :\n");
		printf("\nEnter your choice:");
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
			
		    default:printf("please enter 1 to 4 number \n");
		}
	}
}
void push()
{
	int m;
	if(top==Max-1)
	{
		printf("stack is full \n");
	}
	else
	{
		printf("enter the number want to push: \n");
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
		printf("stack is underflow \n");
	}
	else
	{
		p=stack[top];
		top--;
	}
	printf("pop value is %d \n",p);
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
}
