#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *temp,*head,*r;
void creat_node()
{
	int n;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the insert data \n");
	scanf("%d",&n);
    temp->data=n;
    head=temp;
    temp->next=NULL;
}
void reverse()
{
	struct node *previous=NULL;
	struct node *current=head;
	struct node *current_nxt;
	while(current!=NULL)
	{
		current_nxt=current->next;
		current->next=previous;
		previous=current;
		current=current_nxt;
	}
	head=previous;
}
void insert_last()
{
	int n;
	temp=head;
	     
	     temp=head;
	     while(temp->next!=NULL)
	     temp=temp->next;
	     r=(struct node *)malloc(sizeof(struct node));
	     printf("enter the insert number::\n");
	     scanf("%d",&n);
	     r->data=n;
	     temp->next=r;
	     r->next=NULL;
}
void insert_beg()
{
	int n;
	temp=head;
	r=(struct node *)malloc(sizeof(struct node));
	printf("enter the insert number ::\n");
	scanf("%d",&n);
	r->data=n;
	r->next=temp;
	head=r;
}
void insert_any()
{
	int pos,i=2,n;
	temp=head;
	printf("enter the position::\n");
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
		r=(struct node*)malloc(sizeof(struct node));
		printf("enter the insert value::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp->next;
		temp->next=r;
	}
}
void delete_any()
{
	int pos,i=2,n;
	temp=head;
	printf("enter the delete pos::\n");
	scanf("%d",&pos);
	if(head==NULL)
	printf("empty list");
	if(pos==1)
	head=temp->next;
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		r=temp->next;
		temp->next=r->next;
	}
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
	    printf("%d \n",temp->data);
	    temp=temp->next;
    }
}
int main()
{
	while(1)
	{
		int a,b;
		printf("enter '1' to creat first node \n enter '2' to insert(first/last/any position) \n enter'3' to delete any position \n enter '4' to display \n enter '5' to reverse \n enter '6' to exit. \n ");
		printf("enter your choice::\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:creat_node();
			break;
			case 2:printf("enter '1' to insert at last. \n enter '2' to insert at first. \n enter '3' to add any position.\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:insert_last();
				break;
				case 2:insert_beg();
				break;
				case 3:insert_any();
				break;
				default:printf("invalid input \n");
			}
			break;
			case 3:delete_any();
			break;
			case 4:display();
			break;
			case 5:reverse();
			break;
			case 6:exit(0);
			default:printf("invalid input \n");
		}
	}
}
