#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head;
void creatlist(int n);
void display();
int main()
{
	int n;
	printf("enter the total number of nodes:: \n");
	scanf("%d",&n);
	creatlist(n);
	printf("\n data in the list \n");
	display();
	return 0;
}
void creatlist(int n)
{
	struct node *newnode,*temp;
	int data,i;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("\n unable to allocated memory \n");
		exit(0);
	}
	printf("enter the data of node 1:: \n");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	temp=head;
	for(i=2;i<=n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("unable to allocated memory \n");
			exit(0);
		}
		printf("enter the data of node %d::",i);
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
}

void display()
{
	struct node *temp;
	if(temp==NULL)
	{
		printf("list is empty \n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("data=%d \n",temp->next);
		temp=temp->next;
	}
}
