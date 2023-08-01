#include<stdio.h>
int main()
{
    int n=5;
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //letter
        char ch='A';
        int brekpoint=(2*i+1)/2;
        for(int j=1;j<=(2*i+1);j++)
        {
            printf("%c",ch);
            if(j<=brekpoint)
            ch++;
            else 
            ch--;
        }
        for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
        printf("\n");
    }
    return 0;
    
}