#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main()
{
    int a=2,b=4;
    int lcm=(a*b)/gcd(a,b);
    printf("%d is lcm of %d and %d",lcm,a,b);
    printf("\n %d is gcd of %d and %d",gcd(a,b),a,b);
    return 0;
}