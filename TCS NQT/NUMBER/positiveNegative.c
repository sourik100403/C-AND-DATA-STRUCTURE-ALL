#include<stdio.h>
int isposiNegi(int n)
{
    if(n>0)
    {
        printf("positive");
    }
    else
    printf("negative");
}
int main()
{
    int n=-9;
    isposiNegi(n);
    return 0;
}