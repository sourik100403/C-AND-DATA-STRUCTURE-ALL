#include<Stdio.h>
int main()
{
    char str[100];
    int index=0;
    printf("enter the string ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch==' '){
            continue;
        }
        str[index++]=str[i];
    }
    str[index]='\0';
    printf("%s",str);
    return 0;
}