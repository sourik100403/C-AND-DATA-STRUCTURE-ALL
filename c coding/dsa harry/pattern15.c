#include<stdio.h>
int main()
{
    int n=5;
    int count=1;
    for (int i = 65; i<(65+n); i++)
    {
        for(int j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");

    }
    return 0;
    
}