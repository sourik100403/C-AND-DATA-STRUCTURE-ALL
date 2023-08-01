#include<stdio.h>
int reverseNumber(int a)
{
    int reverse=0;
    while(a>0)
    {
        // int d=a%10;
        // printf("%d ",d);
        // a=a/10;

        //proces 2
        int lastdigit=a%10;
        reverse=((reverse*10)+lastdigit);
        a=a/10;
    }
    return reverse;
}
int main()
{
    int a=13244;
    reverseNumber(a);
    return 0;
}