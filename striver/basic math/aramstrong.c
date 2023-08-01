#include<stdio.h>
int aramstrong(int a)
{
    int temp=a;
    int result=0;
    while(a>0)
    {
        int ld=a%10;
        result+=ld*ld*ld;
        a=a/10;
    }
    printf("%d",result);
    if(temp==result)
    printf("aramstrong");
    else
    printf("not");
}
int main()
{
    int a=371;
    aramstrong(a);
    return 0;
}