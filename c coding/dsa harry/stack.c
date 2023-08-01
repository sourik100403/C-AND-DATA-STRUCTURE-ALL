#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack * ptr)
{
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow %d can not push",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("stack underflow can not pop");
        return -1;
    }
    else{
       int  val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
    printf("stck created sucessfully \n");
    printf(" before push :Empty %d \n",isEmpty(sp));
    printf("before push :Full %d \n",isFull(sp));
    push(sp,65);
    printf(" after push :Empty %d \n",isEmpty(sp));
    printf("after push :Full %d \n",isFull(sp));
    printf("pop value %d",pop(sp));

    return 0;


}