#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node * right;
};
struct node * creatnode(int data)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postOrder(struct node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
        
    }
}

int main()
{
    //manullay creat node
    // struct node *p;
    // p=(struct node *)malloc(sizeof(struct node));
    // p->data=10;
    // p->left=NULL;
    // p->right=NULL;


    //construct node by using the function
    struct node *p=creatnode(4);
    struct node *p1=creatnode(1);
    struct node *p2=creatnode(6);
    struct node *p3=creatnode(5);
    struct node *p4=creatnode(2);

    //linking the node with root node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("\n preorder of the data is ::\n");
    preorder(p);
    printf("\n postorder of the data is ::\n");
    postOrder(p);
    printf("\n inorder of the data is ::\n");
    inOrder(p);
    return 0;



}