#include<stdio.h>
int reverse(int n)
{
    int d;
    int rev=0;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n=120;
    printf("%d ",reverse(n));
    return 0;
}