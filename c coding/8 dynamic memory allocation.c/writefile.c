#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[70]="the tutorial 9.c";
    ptr=fopen("mytext.txt","a");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}
