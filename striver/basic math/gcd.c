#include<stdio.h>
int main()
{
    int n1=5,n2=100;
    int min;
    int gcd=1;
    if(n1>n2)
    {
        min=n2;

    }
    else
    {
        min=n1;
    }
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }


    //process 2
    // for(int i=min;i>=1;i--)
    // {
    //     if(n1%i==0 && n2%i==0)
    //     {
    //         // gcd=i;
    //         printf("%d ",i);
    //         break;
    //     }
    // }
    printf("gcd of %d and %d is=%d ",n1,n2,gcd);
}