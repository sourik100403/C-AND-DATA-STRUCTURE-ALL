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
    int x=4,y=8;
    printf("%d",gcd(x,y));
    return 0;
}