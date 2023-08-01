#include<stdio.h>
int main()
{
    int n=5;
    int inthis=0;
    for(int i=0;i<n;i++)
    {
        int inthis=0;
        //star
        // for(int j=n;j>=1;j--)
        for(int j=1;j<=n-i;j++)
        {
            printf("*");
        }
        //space
        for(int j=0;j<=inthis;j++)
        {
            printf(" ");
        }
        //star
         for(int j=1;j<=n-i;j++)
        {
            printf("*");
        }
        inthis+=2;
        
        printf("\n");
    }

       
    for(int i=1;i<=n;i++)
    {
        //star
        int inthis=8;
        // for(int j=n;j>=1;j--)
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        //space
        for(int j=0;j<=inthis;j++)
        {
            printf(" ");
        }
        //star
         for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        inthis-=2;
        
        printf("\n");
    }
}