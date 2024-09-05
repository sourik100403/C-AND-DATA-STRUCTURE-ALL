#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter the nmumber decimal :\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("%d binary code is : \n",n);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}