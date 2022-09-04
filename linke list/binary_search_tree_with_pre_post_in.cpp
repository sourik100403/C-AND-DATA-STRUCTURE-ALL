#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
void create_bst(int c);

int main()
{
	int ch,n,i,d;
	while(1)
	{
		printf("\nPress 1 to create the binary tree\n");
		printf("Press 2 for inorder traversal\n");
		printf("Press 3 for preorder traversal\n");
		printf("Press 4 for postorder traversal\n");
		printf("5 to exit\n");
		printf("enter your choice::\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			    printf("enter the number of node ::\n");
			    scanf("%d",&n);
			    i=1;
			    while(i<=n)
			    {
			    	printf("enter the data::\n");
			    	scanf("%d",&d);
			    	create_bst(d);
			    	i++;
				}
				break;
			case 2:
				printf("the inorder traversal ::\n");
				inorder(root);
				break;
			case 3:
				printf("the preorder traversal ::\n");
				preorder(root);
				break;   
			case 4:
				printf("the postorder traversal ::\n");
				postorder(root);
				break;
			case 5:exit(0);
			default:printf("please enter  1 to 5 any number");
		}
	}
}


void create_bst(int c)
{
	struct node *temp,*root1;
	root1=root;
	while(1)
	{
		if(root1==NULL)
		{
			root1=(struct node *)malloc(sizeof(struct node));
			root1->data=c;
			root1->left=NULL;
			root1->right=NULL;
			root=root1;
			break;
		}
		else
		{
			if(c<root1->data)
			{
				if(root1->left==NULL)
				{
					temp=(struct node *)malloc(sizeof(struct node));
					temp->data=c;
					temp->left=NULL;
					temp->right=NULL;
					root1->left=temp;
					break;
				}
				else
				{
					root1=root1->left;
				}
			}
			else
			{
				if(root1->right==NULL)
				{
				    temp=(struct node *)malloc(sizeof(struct node));
				    temp->data=c;
				    temp->left=NULL;
				    temp->right=NULL;
				    root1->right=temp;
				    break;
			    }
				else
				{
					root1=root1->right;
				}
			}
		}
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

