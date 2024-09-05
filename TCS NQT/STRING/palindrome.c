#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter thge string::\n");
    scanf("%s",str);
    int flag=-1;
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==-1){
        printf("%s is palindrome",str);
    }
    else{
        printf("%s is not palindrome",str);
    }
    return 0;

}