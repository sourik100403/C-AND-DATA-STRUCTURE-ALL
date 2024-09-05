#include<stdio.h>
int fibo(int num)
{
    int n1=0,n2=1,n3;
    if(num==1){
        return 0;
    }
    if(num==2){
        return 1;
    }
    else{
        n1=n2;
        n2=n3;
        return fibo(num-1)+fibo(num-2);
    }

}
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("%d",fibo(n));

    return 0;
}