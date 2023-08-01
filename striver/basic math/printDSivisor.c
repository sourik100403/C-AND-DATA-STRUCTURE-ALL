#include<stdio.h>
int main()
{
    int n=36;
    // for(int i=1;i<=n/2;i++)
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }

    //logic 2  i*36/i==36
   
    return 0;
}