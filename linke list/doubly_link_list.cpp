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
		printf("enter the data::\n");
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
		while(temp->next!=NULL)
		temp=temp->next;
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=NULL;
		temp->next=r;
		r->prev=temp;
	}
}
void insert_any()
{
	int pos,i=2,n;
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
		printf("enter the data::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp->next;
		r->next->prev=temp;
		r->prev=temp;
		temp->next=r;
	}
}
void delete_any()
{
	int pos,i=2,n;
	temp=head;
	printf("enter ");
	if(head==NULL)
	printf("empty list");
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
	while(temp->next!=NULL);
	printf("%d \n",temp->data);
	temp=temp->next;
}
int main()
{
     int op;
	 while(1)
	 {
	 	printf("enter '1' to insert first \n enter '2' to insert last \n enter '3' to insert any position \n enter '4' delete any position \n enter '5' display \n enter '6' to exit");
	 	printf("enter your choice ::\n");
	 	scanf("%d",&op);
	 	switch(op)
	 	{
	 		case 1:insert_beg();
	 		break;
	 		case 2:insert_last();
	 		break;
	 		case 3:insert_any();
	 		break;
	 		case 4:delete_any();
	 		break;
	 		case 5:display();
	 		break;
	 		case 6:exit(0);
	 		default:printf("envalid input please enter 1 to 6 \n");
		 }
     }	
}
