#include<stdio.h>
int fibonacci(int n)
{
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int p;
    printf("enter the value ::");
    scanf('%d',&p);
    printf("%d",fibonacci(p));
    return 0;
}