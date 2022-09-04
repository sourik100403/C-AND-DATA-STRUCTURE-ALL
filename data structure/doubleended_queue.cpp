#include<stdio.h>
#include<stdlib.h>
# define max 4
int de[max],front=-1,rear=-1;
void addfront(void);
void addrear(void);
void delfront(void);
void delrear(void);
void display(void);
int main()
{
	int n;
	while(1)
	{
		printf("\n enter your choice \n 1 to addfront \n 2 to addrear \n 3 to delete front \n 4 to delete rear \n 5 to display \n 6 to exit \n");
	    scanf("%d",&n);
		switch(n)
		{
			case 1:addfront();
			break;
			case 2:addrear();
			break;
			case 3:delfront();
			break;
			case 4:delrear();
			break;
			case 5:display();
			break;
			case 6:exit(0);
			default:printf("please enter 1 to 6 any number");
		}	
	}
}
void addfront(void)
{
	int m;
	if(front==0)
	printf("overflow not possible add element\n");
	else
	{
		printf("enter the element::\n");
		scanf("%d",&m);
		de[front]=m;
	}
}

void addrear(void)
{
	int m;
	if(front==-1 && rear==-1)
	printf("underflow");
	else if(front==rear)
	{
		printf("enter element::\n");
		scanf("%d",&m);
		de[rear]=m;
	}
	else
	{
		rear++;
		printf("enter element::\n");
		scanf("%d",&m);
		de[rear]=m;
	}
}

void delfront(void)
{
	int s;
	if(front==-1 && rear==-1)
	printf("underflow no element present");
	else
	{
		printf("enter the lement::\n");
		scanf("%d",&s);
		front++;
		s=de[front];	
	}
}

void delrear(void)
{
	int p;
	if(front==-1 && rear==-1)
	printf("underflow no element present");
	else
	{
		printf("enter del element::\n");
		scanf("%d",&p);
		rear=-1;
		p=de[rear];
	}
}
void display(void)
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d\n",de[i]);
}
