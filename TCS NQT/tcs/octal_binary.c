#include<stdio.h>
#include<math.h>
int main()
{
    int num,dec_no=0,temp=0,binary=0,i=0;
    printf("enter the number of octal :");
    scanf("%d ",&num);
   int value=num;
    //convert ocatl to decimal
    while(num!=0)
    {
        dec_no=dec_no+(num%10)*pow(8,temp);
        num=num/10;
        temp++;
    }
    // printf("%d decimal value is",dec_no);
   while(value!=0)
   {
    binary+=(value%2)*pow(10,i);
    value=value/10;
    i++;
   }
   printf("binary value is %d",binary);
   return 0;
}