#include<stdio.h>
#include<stdlib.h>
#define max 3
void addfront();
void addrear();
void delfront();
void delrear();
void display();
int dq[max],front=-1,rear=-1;
void main()
{
	int n,p;
	while(1)
	{
		printf("\n 1.insertfront \n 2.insertrear \n 3.delfront \n 4.delrear \n 5.display \n 6.exit");
		printf("enter your choice");
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
			default:printf("enter 1 to 6");
		}
	}
}
void addfront()
{
	int m;
	if(front==0)
	printf("overflow");
	else
	printf("enter the you insert");
	scanf("%d",&m);
	dq[front]=m;
}
void addrear()
{
	int p;
	if(front==-1 && rear==-1)
	{
	printf("underflow");
    }
	else if(front==rear)
	{
		printf("enter element");
		scanf("%d",&p);
		dq[rear]=p;
	}
	else
	{
		rear++;
		printf("enter number");
		scanf("%d",&p);
		dq[rear]=p;
	}
}
void delfront()
{
		int s;
		if(front==-1 && rear==-1)
		printf("underflow no element present");
		else
		{
			printf("enter the you can delete the queue");
			scanf("%d",&s);
			front=-1;
			s=dq[front];
		}
		
}
void delrear()
{
		int t;
		if(front==-1 && rear==-1)
		{
			printf("no element present");
		}
		else
		{
			printf("enter number you can delete number ");
			scanf("%d",&t);
			rear=-1;
			t=dq[rear];
		}
}
void display()
{
		int i;
		for(i=front;i<=rear;i++)
		printf("%d",dq[i]);
}

