#include<stdio.h>
#include<stdlib.h>
#define max 5
int cq[max],front=-1,rear=-1;
void insert();
void del();
void display();
int main()
{
	int n,p;
	while(1)
	{
	    printf("\n 1.insert \n 2.delete \n 3. display \n 4.exit \n");
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
	    	default:printf("choses 1 to 4 \n");
		}
	}
	return 0;
}
void insert()
{
	
	int m;
	if(front==-1 && rear==max-1||front==rear+1)
	{
		printf("overflow condition");
	}
	else if(front==-1 && rear==-1)
	{
		front=(front+1)%max;
		rear=(rear+1)%max;
		printf("enter the number you insert");
		scanf("%d",&m);
		cq[rear]=m;
	}
	else
	{
		rear=(rear+1)%max;
		printf("enter the number");
		scanf("%d",&m);
		cq[rear]=m;
	}
}
void del()
{
	int p;
	if(front==-1)
	printf("underflow");
	else if(front==rear)
	{
		p=cq[front];
		front=-1;
		rear=-1;
		printf("enter the element you can delete",p);	
	}
	else
	{
		p=cq[front];
		front=(front+1)%max;
		printf("enter the element you can delete",p);
	}
}
void display()
{
	int i;
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
		printf("%d",cq[i]);
	}
	else
	{
		for(i=front;i<=max-1;i++)
		printf("%d",cq[i]);
		for(i=0;i<=rear;i++)
		printf("%d",cq[i]);
	}
}
