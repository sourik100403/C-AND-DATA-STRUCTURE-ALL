#include<stdio.h>
int main()
{
    int n=9;
    for(int i=1;i<=9;i++)
    {
        if(n%i==0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}