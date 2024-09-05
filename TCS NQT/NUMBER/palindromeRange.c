#include<stdio.h>
int ispalindrome(int n)
{
    int reverse=0;
    int temp=n;
    while(temp>0)
    {
        reverse=reverse*10+(temp%10);
        temp=temp/10;
    }
    if(temp==reverse)
     return 1;
     else
    return 0;
    
}
int main()
{
    int min=10;
    int max=50;
    for(int i=min;i<=max;i++)
    {
        if(ispalindrome(i)==1)
        {
            printf("%d",i);
        }
    }
}