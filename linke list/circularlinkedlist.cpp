#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp,*temp1,*r;
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
		temp->next=head;
	}
	else
	{
		temp=head;
		while(temp!=head)
		temp=temp->next;
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d",&n);
		r->data=n;
		temp->next=r;
		r->next=head;
	}
}

void insert_beg()
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
		temp->next=head;
	}
	else
	{
		temp=head;
		r=(struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d",&n);
		r->data=n;
		r->next=temp;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		head=r;
		temp->next=head;
	
	}
}

void insert_any()
{
	int pos,n,i=2;
	temp=head;
	printf("enter insert pos::\n");
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
		temp->next=r;
	}
}

void del()
{
	int pos,i=2,n;
	temp=head;
	printf("enter your delete position::\n");
	scanf("%d",&pos);
	if(head==NULL)
	{
		printf("not delete posiibile\n");
	}
	if(pos==1)
	{
		temp1=head;
		while(temp1->next!=NULL)
		    temp1=temp1->next;
		head=temp->next;
		temp1->next=head;
	}
	else
	{
		temp=head;
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
	while(temp->next!=head)
	{
		printf("%d \t",temp->data);
		temp=temp->next;
		
	}
	printf("%d \t",temp->data);
}

void search()
{
	int pos,i=2,flag=-1,n;
	temp=head;
	printf("enter the searching data::\n");
	scanf("%d",&n);
	while(temp->next!=head){
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
		printf("enter '1' to insert  \n enter '2' to delete \n enter '3' to display \n enter '4' to search \n 5 to exit \n");
		printf("enter your choice:\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:printf("enter '1' to ensert last \n enter '2' to ensert beginging \n enter '3' to ensert any \n");
			      printf("enter your choice::\n");
			      scanf("%d",&b);
			      switch(b)
			      {
			      	case 1:insert_last();
			      	break;
			      	case 2:insert_beg();
			      	break;
			      	case 3:insert_any();
			      	break;
			      	default:printf("enter 1 to 3 \n");
				  }
				  break;
			case 2:del();
			break;
			case 3:display();
			break;
			case 4:search();
			break;
			case 5:exit(0);
			default:printf("enter 1 to 5 \n");
		}
	}
}
