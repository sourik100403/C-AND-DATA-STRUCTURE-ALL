#include<stdio.h>
int isOddEven(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else
    printf("odd");
}
int main()
{
    int n=6;
    isOddEven(n);
    return 0;
}