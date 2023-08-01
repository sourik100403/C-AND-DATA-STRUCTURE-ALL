#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};

struct node * createNode(struct node *head,int val)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    head=temp;
    temp->next=NULL;
}
int display(struct node * temp)
{
    while (temp!=NULL)
    {
        /* code */
        printf("elemt is :: %d \n",temp->data);
        temp=temp->next;
    }
    
}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    // struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    //link first and second
    head->data=7;
    head->next=second;
    //link second and third
    second->data=11;
    second->next=third;
    //link third and null
    third->data=13;
    third->next=NULL;
    createNode(third,433);
    display(head);

    


}