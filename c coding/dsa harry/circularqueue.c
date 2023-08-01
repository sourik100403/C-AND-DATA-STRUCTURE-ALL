#include<stdio.h>
#include<stdlib.h>
struct cq{
    int size;
    int f;
    int r;
    int * arr;
};
int isEmpty(struct cq *ptr)
{
    if(ptr->f==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct cq *ptr)
{
    if((ptr->f==0 && ptr->r==ptr->size-1) || (ptr->f==ptr->r+1))
    {
        return 1;
    }
    return 0;
}
void insert(struct cq *ptr,int val)
{
    if(isFull(ptr)){
        printf("overflow can not insert %d \n",val);
    }
    else if(ptr->f==-1 && ptr->r==-1)
    {
        ptr->f+=1;
        ptr->r+=1;
        ptr->arr[ptr->r]=val;
    }
    else{
        ptr->r=(ptr->r+1)%ptr->size;
        ptr->arr[ptr->r]=val;
    }
}
int delete(struct cq * ptr)
{
    int val;
    if(isEmpty(ptr))
    {
        printf("can not delete element its empty");
    }
    else if(ptr->f==ptr->r)
    {
        val=ptr->arr[ptr->f];
        ptr->f=-1;
        ptr->r=-1;
        return val;
    }
    else{
        val=ptr->arr[ptr->f];
        ptr->f=(ptr->f+1)%ptr->size;
        return val;
    }

}
void display(struct cq *ptr)
{
    if(ptr->f<=ptr->r)
    {
        for(int i=ptr->f;i<=ptr->r;i++)
        {
            printf("%d \n",ptr->arr[i]);
        }
    }
    else{
        for(int i=ptr->f;i<=ptr->size-1;i++)
        printf("%d \n",ptr->arr[i]);
        for(int i=0;i<=ptr->r;i++)
        printf("%d \n",ptr->arr[i]);
    }
}
int main()
{
    struct cq *sp=(struct cq *)malloc(sizeof(struct cq));
    sp->size=5;
    sp->f=-1;
    sp->r=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
    printf("stck created sucessfully \n");
    printf("before push :Empty %d \n",isEmpty(sp));
    printf("before push :Full %d \n",isFull(sp));
    insert(sp,76);
    insert(sp,77);
    insert(sp,78);
    insert(sp,79);
    insert(sp,71);
    display(sp);
    delete(sp);
    insert(sp,72);
    display(sp);
    // printf(" after push :Empty %d \n",isEmpty(sp));
    // printf("after push :Full %d \n",isFull(sp));
    // printf("pop value %d \n",delete(sp));
    // insert(sp,800);
    // insert(sp,72);
    // printf("pop value %d \n",delete(sp));
    // printf("pop value %d \n",delete(sp));
    // printf("pop value %d \n",delete(sp));
    // printf("pop value %d \n",delete(sp));
    // insert(sp,800);
    // insert(sp,72);
    // display(sp);


}