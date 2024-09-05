#include<stdio.h>
int gretest(double n1,double n2){
    if(n1>n2){
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    double n1=1.123;
    double n2=1.124;
    printf("%d",gretest(n1,n2));
    return 0;
}