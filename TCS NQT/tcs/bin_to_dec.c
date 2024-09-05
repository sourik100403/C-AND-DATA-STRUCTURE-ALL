#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,dec_no=0,temp=0;
    printf("enter the number binary:");
    scanf("%d",&n);
    int bin_no=n;
    while(n>0)
    {
        rem=n%10;
        dec_no=dec_no+rem*pow(2,temp);
        n=n/10;
        temp++;
    }
    printf("%d decimal no is %d",bin_no,dec_no);
    return 0;
}