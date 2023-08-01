#include<stdio.h>
int countDigit(int a)
{
    int count=0;
    while(a>0)
    {
        // int d=a%10;
        count++;
        a=a/10;
    }
    printf("%d \n",count);
}
int main()
{
    int a=797;
    countDigit(a);
    return 0;
}