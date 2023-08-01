#include<stdio.h>
int main()
{
    int n=5;
    int space=2*(n-1);
    for (int i = 1; i <= n; i++)
    {
       //number
       for(int j=1;j<=i;j++)
       {
        printf("%d",j);
       }
       //space
       for(int j=1;j<=space;j++)
       {
        printf(" ");
       }
       //number
       for(int j=i;j>=1;j--)
       {
        printf("%d",j);
       }
        printf("\n");
        space-=2;
    }
    
}