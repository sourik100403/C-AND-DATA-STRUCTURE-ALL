#include<stdio.h>
int poww(int x,int y){
    if(y==0){
        return 1;
    }
    else
    {
        return x*poww(x,y-1);
    }
}
int main()
{
    int n=100;
    int i=0;
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+(d*poww(2,i));
        i++;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}