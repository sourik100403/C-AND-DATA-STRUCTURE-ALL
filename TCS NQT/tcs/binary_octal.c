#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,dec_no=0,temp=0;
    printf("enter the number binary:");
    scanf("%d",&n);
    int bin_no=n;
    //convert decimal
    while(n>0)
    {
        rem=n%10;
        dec_no=dec_no+rem*pow(2,temp);
        n=n/10;
        temp++;
    }
    printf("%d decimal no is %d",bin_no,dec_no);
    //convert decimal to octal
    int i=1;
    int oct_rem;
    int oct=0;
    while(dec_no!=0)
    {
        oct_rem=dec_no%8;
        oct=oct+oct_rem*i;
        dec_no=dec_no/8;
        i=i*10;
    }
    printf("octal of %d is %d",dec_no,oct);
    return 0;
}