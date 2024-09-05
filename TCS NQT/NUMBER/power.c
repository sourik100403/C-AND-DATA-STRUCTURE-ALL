#include<stdio.h>
int exponents(int x,int y){
    if(y==0){
        return 1;
    }
    else
    {
        return x*exponents(x,y-1);
    }
}
int main()
{
    int x=2;
    int y=4;
   printf("%d ",exponents(x,y));
   return 0;
}