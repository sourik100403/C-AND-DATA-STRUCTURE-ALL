# include<stdio.h>
int main()
{
    FILE *ptr;
    int ch;
    // char filename[30];
    printf("\n enter the filename :");
    ptr=fopen("filename","r");
    if(ptr==NULL)
    {
        printf("\n the file could not exit");
    }
    ch=fgetc(ptr);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=fgetc(ptr);
    }
    fclose(ptr);
}
