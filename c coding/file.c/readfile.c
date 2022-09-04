#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[76];
    ptr=fopen("mytext.txt","r");
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n",string);
    //fclose(ptr);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     FILE *ptr=NULL;
//     char string[70];
//     ptr=fopen("myfile",'r');
//     fscanf(ptr,"%s",string);
//      printf("content=%s\n",string);
//      fclose(ptr);
//      return 0;
// }
