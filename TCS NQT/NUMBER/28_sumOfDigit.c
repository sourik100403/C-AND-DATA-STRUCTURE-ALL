#include<stdio.h>
int sumNumber(int n)
{
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n=102;
   printf("%d",sumNumber(n));
   return 0;
}
