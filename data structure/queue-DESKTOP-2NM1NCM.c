#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1;
void insert();
void del();
void display();
void main()
{
	int n,p;
	while(1)
	{
		printf("\n 1.insert \n 2.delition \n 3.display \n 4.exit \n");
		printf("enter your choice \n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:insert();
			break;
			case 2:del();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			
			default:printf("please enter valid number 1 to 4");
		}
	}
}
void insert()
{
	int m;
	if(rear==max-1)
	{
		printf("queue is overflow \n");
	}
	else if(front==-1&&rear==-1)
	{
	    front++;
		rear++;
		printf("enter the number you can insert \n");
		scanf("%d",&m);
		queue[rear]=m;	
	}
	else
	{
		rear++;
		printf("enter the number you insert \n");
		scanf("%d",&m);
		queue[rear]=m;
	}
}
void del()
{
	int p;
	if(front==-1)
	{
		printf("queue is underflow");
	}
	else if(front==rear)
	{
		p=queue[front];
		front--;
		rear--;
		printf("delete element is %d",p);
	}
	//printf("delte number %d",p);
	else
	{
		p=queue[front];
		front++;
		printf("delete element is %d",p);
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d",queue[i]);
}
