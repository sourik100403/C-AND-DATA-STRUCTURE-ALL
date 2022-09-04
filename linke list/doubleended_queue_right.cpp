#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL,*temp,*r;
void insert_beg()
{
	int n;
	temp=head;
	if(head==NULL)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			printf("enter the value::\n");
			scanf("%d",&n);
			temp->data=n;
			head=temp;
			temp->next=NULL;
			temp->prev=NULL;
		}
	else
	{
		temp=head;
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp;
		r->prev=NULL;
		temp->prev=r;
		head=r;
	}	
}

void insert_last()
{
	int n;
	temp=head;
	if(head==NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("enter the value ::\n");
		scanf("%d",&n);
		temp->data=n;
		head=temp;
		temp->next=NULL;
		temp->prev=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value ::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=NULL;
		temp->next=r;
		r->prev=temp;	
	}
}

void any()
{
	int pos,i=2,n;
	temp=head;
	printf("enter the insert position::\n");
	scanf("%d",&pos);
	if(pos==1)
	insert_beg();
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value ::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp->next;
		temp->next->prev=r;
		r->prev=temp;
		temp->next=r;
	}
}

void del()
{
	int pos,i=2,n;
	temp=head;
	printf("enter the delete position::\n");
	scanf("%d",&pos);
	if(head==NULL)
	printf("empty list delete not possible\n");
	if(pos==1)
	{
		head=temp->next;
		temp->next->prev=NULL;
	}
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		r=temp->next;
		temp->next=r->next;
		r->next->prev=temp;
	}
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	while(1)
	{
		int n;
		printf("1 to insert first \n 2 to insert last \n 3 to insert any \n 4 dilete \n 5 to display \n 6 to exit\n");
		printf("enter your choice ::\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:insert_beg();
			break;
			case 2:insert_last();
			break;
			case 3:any();
			break;
			case 4:del();
			break;
			case 5:display();
			break;
			case 6:exit(0);
			default:printf("please enter 1 t0 6 any number");
		}
	}
}
