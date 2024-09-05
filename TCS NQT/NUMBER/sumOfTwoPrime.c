#include<stdio.h>
int isprime(int n)
{
    int flag=-1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("True");
    }
    else
    printf("False");
}
int main()
{
    int n=11;
    isprime(n);

}