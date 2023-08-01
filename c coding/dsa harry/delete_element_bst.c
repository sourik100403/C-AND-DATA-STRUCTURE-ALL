#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creatnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root == NULL)
            return NULL;
        if (root->data == key)
            return root;
        else if (key < root->data)
        {
            root = root->left;
        }
        else
            root = root->right;
    }
    return NULL;
}
int insert(struct node *root,int key)
{
    struct node *prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("can not insert thhe key %d",key);
            return 0;
        }
        else if(root->data<key)
        {
            root=root->right;
        }
        else
        root=root->left;
    }
    struct node * new=creatnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    prev->right=new;
}
struct node * inOrderPredecessor(struct node * root){
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node * deleteBST(struct node * root, int value)
{ 
    struct node *ipre;

    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    //serach the node for the deleted
    if(value<root->data)
    {
        deleteBST(root->left,value);
    }
    else if(value>root->data)
    {
        deleteBST(root->right,value);
    }

    //delete strategy when the node is found
    else
    {
        ipre=inOrderPredecessor(root);
        root->data=ipre->data;
        root->left=deleteBST(root->left,ipre->data);
    }
    return root;
}

int main()
{
    // construct node by using the function
    struct node *p = creatnode(5);
    struct node *p1 = creatnode(3);
    struct node *p2 = creatnode(6);
    struct node *p3 = creatnode(2);
    struct node *p4 = creatnode(4);

    // linking the node with root node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    deleteBST(p,5);
    printf("\n");
    inOrder(p);
}