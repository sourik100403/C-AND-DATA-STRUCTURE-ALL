#include<stdio.h>
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int position=12;
    if(position>50)
    {
        printf("plense enter the range 1 to 50");
    }
    else{
        for(int i=0;i<=position;i++){
            printf("%d ",fibo(i));;
        }
    }
    return 0;

}