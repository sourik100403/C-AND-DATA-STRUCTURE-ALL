#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int start=1;
        if(i%2==0)
        {
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ",start);
            start=1-start;

        }
        printf("\n");
    }
    
}