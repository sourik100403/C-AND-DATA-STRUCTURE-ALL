# include<stdio.h>
int main()
{
    int a,b,c;
    FILE *ptr;
    ptr=fopen("student", "r");
    fscanf(ptr,"%d %d %d", &a,&b,&c);
    printf("\n the value of a b and c is %d %d %d",a,b,c);
    fclose(ptr);
    return 0;
}