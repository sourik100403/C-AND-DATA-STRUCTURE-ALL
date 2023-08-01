#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL, *temp, *temp1, *r;
void insert_last()
{
	int n;
	temp = head;
	if (head == NULL)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		printf("enter the insert value::");
		scanf("%d", &n);
		temp->data = n;
		head = temp;
		temp->next = head;
	}
	else
	{
		temp = head;
		while (temp != head)
			temp = temp->next;
		r = (struct node *)malloc(sizeof(struct node));
		printf("enter the value ::\n");
		scanf("%d", &n);
		r->data = n;
		temp->next = r;
		r->next = head;
	}
}
void insert_beg()
{
	int n;
	temp = head;
	if (head == NULL)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		printf("enter the vallu::\n");
		scanf("%d", &n);
		temp->data = n;
		head = temp;
		temp->next = head;
	}
	else
	{
		temp = head;
		r = (struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d", &n);
		r->data = n;
		r->next = temp;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		head = r;
		temp->next = head;
	}
}
void insert_any()
{
	int pos, i = 2, n;
	temp = head;
	printf("enter the delete position::\n");
	scanf("%d", &pos);
	if (pos == 1)
		insert_beg();
	else
	{
		while (i < pos)
		{
			temp = temp->next;
			i++;
		}
		r = (struct node *)malloc(sizeof(struct node));
		printf("enter the value::\n");
		scanf("%d", &n);
		r->data = n;
		r->next = temp->next;
		temp->next = r;
	}
}
void delete_any()
{
	int pos, i = 2, n;
	temp = head;
	printf("enter the delete position::\n ");
	scanf("%d", &pos);
	if (head == NULL)
		printf("empty list \n");
	if (pos == 1)
	{
		temp1 = head;
		while (temp1->next != head)
			temp1 = temp1->next;
		head = temp->next;
		temp1->next = head;
	}
	else
	{
		temp = head;
		while (i < pos)
		{
			temp = temp->next;
			i++;
		}
		r = temp->next;
		temp->next = r->next;
	}
}
void display()
{
	temp = head;
	while (temp->next != head)
	{
		printf("%d \n", temp->data);
		temp = temp->next;
	}
	printf("%d \n", temp->data);
}
int main()
{
	while (1)
	{
		int a, b;
		printf("enter '1' to insert  \n enter '2' to delete \n enter '3' to display \n enter '4' to exit \n ");
		printf("enter your choice:\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("enter '1' to ensert last \n enter '2' to ensert beginging \n enter '3' to ensert any \n");
			printf("enter your choice::\n");
			scanf("%d", &b);
			switch (b)
			{
			case 1:
				insert_last();
				break;
			case 2:
				insert_beg();
				break;
			case 3:
				insert_any();
				break;
			default:
				printf("enter 1 to 3 \n");
			}
			break;
		case 2:
			delete_any();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("enter 1 to 4 \n");
		}
	}
}
