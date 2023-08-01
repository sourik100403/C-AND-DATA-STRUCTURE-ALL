#include<stdio.h>
#include<stdlib.h>
 struct myArray
    {
        /* data */
        int total_size;
        int used_size;
        int *ptr;
    };
    void createArray(struct myArray* a,int t_size,int u_size){
        // (*a).total_size=t_size;
        // (*a).used_size=u_size;
        // (*a).ptr=(int *)malloc(t_size*sizeof(int));
        a->total_size=t_size;
        a->used_size=u_size;
        a->ptr=(int *)malloc(t_size*sizeof(int));
    }
    void show(struct myArray *a){
        for (int i = 0; i < a->used_size; i++)
        {
            /* code */
            printf("%d \n",(a->ptr)[i]);
        }
        
    }
    void setValue(struct myArray *a){
        int n;
        for (int i = 0; i < a->used_size; i++)
        {
            /* code */
            printf("enter element %d :",i);
            printf("%d",&n);
            (a->ptr)[i]=n;
        }
        
    }
int main()
{
    struct myArray markes;
    createArray(&markes,10,2);
    printf("we are now set value \n");
    setValue(&markes);
    printf("we are now show value \n");
    show(&markes);
    return 0;
    
    
}