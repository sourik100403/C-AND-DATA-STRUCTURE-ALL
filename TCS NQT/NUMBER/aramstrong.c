#include<stdio.h>
int isAramstrong(int n)
{
    int temp=n;
    int r;
    int sum=0;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
    }
    // printf("%d ",sum);
    if(n==sum)
    {
        // return 1;
        printf("%d is a aramstroing number",n);
    }
    else
    // return 0;
    printf("%d is not a aramstroing number",n);
}
int main()
{
    int n=1588;
    isAramstrong(n);
    return 0;
}