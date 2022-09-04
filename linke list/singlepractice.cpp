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
	printf("enter the insert value::\n");
	scanf("%d",&n);
	temp->data=n;
	head=temp;
	temp->next=NULL;
}
void add_last()
{
	int n;
	temp=head;
	
	    temp=head;
	    while(temp->next!=NULL)
	    temp=temp->next;
	    r=(struct node *)malloc(sizeof(struct node));
	    printf("enter the insert value::\n");
	    scanf("%d",&n);
	    r->data=n;
	    temp->next=r;
	    r->next=NULL;
}

void add_beg()
{
	int n;
	temp=head;
	r=(struct node *)malloc(sizeof(struct node));
	printf("enter the value::\n");
	scanf("%d",&n);
	r->data=n;
	r->next=temp;
	head=r;
}

void add_any()
{
	int pos,i=2,n;
	temp=head;
	printf("enter your position::\n");
	scanf("%d",&pos);
	if(pos==1)
	add_beg();
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp->next;
		temp->next=r;
	}
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d \t",temp->data);
		temp=temp->next;
	}
}

void del()
{
	int pos,i=2,n;
	temp=head;
	printf("Enter the position:::\n");
	scanf("%d",&pos);
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	if(pos==1)
	{
		head=temp->next;
	}
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		temp->next=temp->next->next;
	}
	
}

void search()
{
	int pos,i=2,flag=-1,n;
	temp=head;
	printf("enter the searching data::\n");
	scanf("%d",&n);
	while(temp!=NULL){
	if(temp->data==n)
	{
		printf("found in list");
		flag=-1;
		break;
	}
	else
	{
		temp=temp->next;
		flag=flag+1;
	}
	if(flag==1)
	{
		printf("not found in list\n");
		
	}
}
	
}

int main()
{
	while(1)
	{
		int a,b;
		printf("\n 1 to creat a node \n 2 to add number(first/last/any pos) \n 3 to delete number \n 4 to display \n 5 to searching \n 6 to exit  ");
		printf("\n Enter your choice::\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:creat_node();
			break;
			case 2:printf("enter your choice \n 1 to add first \n 2 to add last \n 3 to add any position\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:add_beg();
				break;
				case 2:add_last();
				break;
				case 3:add_any();
				break;
				default:printf("enter valid number\n");
			}
			break;
			case 3:del();
			break;
			case 4:display();
			break;
			case 5:search();
			break;
			case 6:exit(0);
			default:printf("enter the valid number\n");
		}
	}
}
