# include<stdio.h>
int main()
{
    int num;
    printf("\n enter the number you need the tabile");
    scanf("\n %d", &num);
    FILE *ptr;
    ptr=fopen("tabile.txt","w");
    for(int i=0;i<10;i++){
        fprintf("\n ptr,"%d x %d=%d",num,i+1,num*(i+1));
        }
    fclose(ptr);
    return 0;
}
