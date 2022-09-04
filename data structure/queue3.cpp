#include<stdio.h>
#include<stdlib.h>
#define Max 5
void insert(void);
void del(void);
void display(void);
int queue[Max],front=-1,rear=-1;
int main()
{
	int n;
	while(1)
	{
		printf("\nenter your choice\n 1 to insert element \n 2 to delete a element \n 3 to display \n 4 to exit \n");
		scanf("%d",&n);
		switch(n){
			case 1:insert();
			break;
			case 2:del();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("\n please enter your write choice");
		}
	}
}
void insert(void)
{
	int n;
	if(rear==Max-1)
	printf("\n not possible its already full");
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		printf("the inesrt value is::\n");
		scanf("%d",&n);
		queue[rear]=n;
	}
	else
	{
		rear++;
		printf("the inesrt value is::\n");
		scanf("%d",&n);
		queue[rear]=n;
	}
}

void del(void)
{
	int m;
	if(front==-1)
	printf("\n\t not present any element its empty ");
	else if(front==rear)
	{
		m=queue[front];
		front=-1;
		rear=-1;
		printf("the delete value is %d",m);
	}
	else
	{
		m=queue[front];
		front++;
		printf("the delete value is %d",m);
	}
}

void display(void)
{
	int i;
	for(i=front;i<=rear;i++)
	printf("\n %d",queue[i]);
	
}
