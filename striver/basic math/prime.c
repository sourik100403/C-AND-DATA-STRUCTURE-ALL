#include<stdio.h>
int main()
{
    int n=11;
    int count=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         count++;
    //     }
    // }
    // if(count==2)
    // {
    //     printf("prime");
    // }
    // else
    // printf("not prime");


    // proces 2
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            count++;
        }
    }
    if(count==2) printf("true");
    else return printf("false");
}