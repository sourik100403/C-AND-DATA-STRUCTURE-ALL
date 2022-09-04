/* Single Linked List*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp,*r;
void create_node()
{
  int n;
       temp=(struct node*)malloc(sizeof(struct node));
       printf("Enter data to insert:");
       scanf("%d",&n);
       temp->data=n;
       head=temp;
       temp->next=NULL;


}
void reverse()
{
    struct node* previous = NULL;   // the previous pointer
    struct node* current = head;   // the main pointer
    struct node* curr_nxt;

    // traverse the list
    while (current != NULL)
    {
	// tricky: note the next node
	curr_nxt = current->next;

	current->next = previous;    // fix the current node

	// advance the two pointers
	previous = current;
	current = curr_nxt;
    }

    // fix the head pointer to point to the new front
    head = previous;
}
void insert_last()
{
	int n;
	temp=head;

		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		r=(struct node*)malloc(sizeof(struct node));
		printf("Enter data to insert:");
		scanf("%d",&n);
		r->data=n;
		temp->next=r;
		r->next=NULL;


}
void insert_beg()
{
		int n;


		temp=head;

		r=(struct node*)malloc(sizeof(struct node));
		printf("Enter data to insert:");
		scanf("%d",&n);
		r->data=n;
		r->next=temp;
		head=r;


}
void insert_any()
{
	int pos,i=2,n;
	temp=head;
	printf("Enter position:");
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
		printf("Enter data to insert:");
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
	printf("Enter position:");
	scanf("%d",&pos);
	if(head==NULL)
	printf("Empty List");
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
		printf("%d\n",temp->data);
		temp=temp->next;
	}
 }
int main()
{
	while(1)
	{   int a,b;
		printf("Enter '1' to create first node \n '2' to insert a node (begin\end\any position): \nEnter '3' to delete at any position.\nEnter '4' to display.\nEnter '5' to reverse\n 6 to exit.\n");
		printf("Enter your choice:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:create_node();
			       break;
			case 2:
			       printf("Enter '1' to insert at beginning.\nEnter '2' to insert at last.\nEnter '3' to insert at any position.\n");
			       scanf("%d",&b);
			       switch(b)
			       {
				case 1:insert_beg();
				       break;
				case 2:insert_last();
				       break;
				case 3:insert_any();
					       break;
				default:printf("invalid input");
				}
				break;
			case 3:delete_any();
			       break;
			case 4:display();
			       break;
			case 5:reverse();
			    break;
			case 6:exit(0);
			default:printf("invalid input");
		}
	}
}
