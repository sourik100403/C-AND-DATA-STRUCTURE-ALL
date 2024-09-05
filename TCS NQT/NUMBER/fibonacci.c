#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n>=2){
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n=6;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}