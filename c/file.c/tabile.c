# include<stdio.h>
int main()
{
	FILE *ptr;
    int num;
    int i;
    printf("\n enter the number you need the tabile :");
    scanf("\n %d", &num);
    ptr=fopen("tabile.txt","w");
    for( i=0;i<10;i+1){
        fprintf(ptr,"%d * %d = %d \n",num,i+1,num*(i+1));
        }
    fclose(ptr);
    return 0;
}
