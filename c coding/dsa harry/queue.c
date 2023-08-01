#include<stdio.h>
#include<stdlib.h>
struct queue
{
    /* data */
    int size;
    int front;
    int rear;
    int * arr;
};
int isEmpty(struct queue *ptr)
{
    if(ptr->front==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *ptr)
{
    if(ptr->rear==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void insertion(struct queue * ptr,int val){
    if(isFull(ptr)){
        printf("can  ot insert value %d \n",val);
    }
    else if(ptr->front==-1 && ptr->rear==-1)
    {
        ptr->front+=1;
        ptr->rear+=1;
        ptr->arr[ptr->rear]=val;
    }
    else{
        ptr->rear+=1;
        ptr->arr[ptr->rear]=val;

    }
}
int deletion(struct queue * ptr)
{
    int val;
    if(isEmpty(ptr)){
        printf("can not posible deletion because its empty");
    }
    else if(ptr->front==ptr->rear){
        val=ptr->arr[ptr->front];
        ptr->front=-1;
        ptr->rear=-1;
        return val;
    }
    else{
        val=ptr->arr[ptr->front];
        ptr->front++;
        return val;
    }
}
void speek(struct queue * ptr)
{
    for (int i = ptr->front; i<=ptr->rear; i++)
    {
        /* code */
        printf("%d ",ptr->arr[i]);
    }
    
}

int main()
{
    struct queue * sp=(struct queue *)malloc(sizeof(struct queue));
    sp->size=5;
    sp->front=-1;
    sp->rear=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
     printf(" before push :Empty %d \n",isEmpty(sp));
    printf("before push :Full %d \n",isFull(sp));
    insertion(sp,10);
    insertion(sp,20);
    speek(sp);
    // deletion(sp);

    printf("\n after push :Empty %d \n",isEmpty(sp));
    printf("after push :Full %d \n",isFull(sp));
    printf("pop value %d \n",deletion(sp));
    printf("pop value %d \n",deletion(sp));
    printf(" after push :Empty %d \n",isEmpty(sp));
    insertion(sp,20);
    speek(sp);


}