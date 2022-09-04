#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp;
void creat_node()
{
	int n;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data to insert ::\n");
	scanf("%d",&n);
	temp->data=n;
	head=temp;
	temp->next=NULL;
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n;
	printf("enter the number of node::\n");
	scanf("%d",&n);
	creat_node();
	printf("disply the number ::\n");
	display();
	return 0;
}
