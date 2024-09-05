#include<stdio.h>
int reverse(int n)
{
    int y=0;
    while(n>0)
    {
        int digit=n%10;
        y=y*10+digit;
        n=n/10;
    }
    return y;
}
int main()
{
    int n=1110111;
    int y=reverse(n);
    printf("%d ",y);
    if(n==y)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}