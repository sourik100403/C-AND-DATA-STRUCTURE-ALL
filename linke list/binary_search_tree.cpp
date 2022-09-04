#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
void creatBST(int c);
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
int main()
{
	int ch,n,i,d;
	while(1)
	{
		printf("press 1 to creat binary search tree\n");
		printf("press 2 to to inorder traversal\n");
		printf("press 3 to preorder traversal\n");
		printf("press 4 to postorder traversal\n");
		printf("5 to exit \n");
		printf("enter your choice ? \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the number of node::\n");
			       scanf("%d",&n);
			       i=1;
			       while(i<=n)
			       {
			       	   printf("enter the value::\n");
			       	   scanf("%d",&d);
			       	   creatBST(d);
			       	   i++;
				   }
				   break;
			case 2:printf("inorder traversal=\n");
			       inorder(root);
			       break;
			case 3:printf("preorder traversal=\n");
			       preorder(root);
			       break;
			case 4:printf("postorder traversal=\n");
			       postorder(root);
				   break;
			case 5:exit(0);
			default:printf("please enter 1 to 5 any number!!");			       
		}
	}
}
void creatBST(int c)
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
		printf("%d\n",root->data);
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
