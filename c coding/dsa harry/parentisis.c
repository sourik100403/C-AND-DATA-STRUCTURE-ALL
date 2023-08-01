#include<stdio.h>
#include<stdlib.h>
struct stack
{
    /* data */
    int top;
    int size;
    char * arr;
};
int isEmpty(struct stack * ptr)
{
    if(ptr->top==-1)
    {
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
void push(struct stack * ptr, char val)
{
    if(isFull(ptr)){
        printf("stack is full %d can not push \n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]==val;
    }
}
char pop(struct stack * ptr)
{
    if(isEmpty(ptr)){
        printf("stack is empty can not pop");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char parenThisisMatch(char * exp)
{
    struct stack * sp;
    sp->size=7;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size *sizeof(char));
    for (int i = 0;exp[i]!="\0"; i++)
    {
        /* code */
        if(exp[i]=='('){
            push(sp,'(');

        }
        else if(exp[i]==')'){
            if(isEmpty(sp))
            {
                return 0;
            }
            pop(sp);

        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    


}


int main()
{
    char * exp="6*(8)";
    if(parenThisisMatch(exp)){
        printf("match parenthisis");
    }
    else{
        printf("not match");
    }
    return 0;
}