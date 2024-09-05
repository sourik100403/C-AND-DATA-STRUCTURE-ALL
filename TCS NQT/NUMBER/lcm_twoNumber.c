#include<stdio.h>
int gcd(int x,int y){
    int rem=y%x;
    if(rem==0)
    return x;
    else
    return gcd(rem,x);
}
int main()
{
    int x=2,y=5;
    int g=gcd(x,y);
    int lcm=(x*y)/g;//for mula
    printf("%d",lcm);
    return 0;
}