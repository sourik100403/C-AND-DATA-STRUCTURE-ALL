#include<stdio.h>
int palin(int n)
{
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int ld=n%10;
        sum=(sum*10)+ld;
        n=n/10;
    }
    if(temp==sum)
    {
        return 1;
    }
    else return 0;

}
int main()
{
    int n=121;
    palin(n);
    return 0;

}