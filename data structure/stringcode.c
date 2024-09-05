#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string");
    gets(str);
    int vowel,consonet,special,space,number;
    vowel=consonet=special=space=number=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            ++vowel;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            ++consonet;
        }
        else if(ch==' '){
            ++space;
        }
        else if(ch>='0' && ch<='9'){
            ++number;
        }
        else{
            ++special;
        }
    }
    printf("vpwel is %d \n",vowel);
    printf("vpwel is %d \n",consonet);
    printf("vpwel is %d \n",special);
    printf("vpwel is %d \n",space);
    return 0;
}