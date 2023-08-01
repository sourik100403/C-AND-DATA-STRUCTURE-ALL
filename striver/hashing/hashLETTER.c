//"abcaf"=
/*
a=2
b=1
c=1
f=1
g=0
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[300];
    gets(str);
    int hash[26]={0};
    for(int i=0;i<5;i++)
    {
        hash[str[i]-'a']++;
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        char c;
        scanf("%c",&c);
        printf("%d ",hash[c-'a']);
    }
    return 0;
}