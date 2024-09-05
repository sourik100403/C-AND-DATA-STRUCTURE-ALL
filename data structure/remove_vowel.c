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
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            continue;
        }
        str[index++]=str[i];
    }
    str[index]='\0';
    printf("%s",str);
    return 0;
}