#include<stdio.h>
#include<math.h>
int binaryTodecimal(int n)
{
    int dec=0;
    int i=0;
    while(n!=0){
        int rem=n%10;
        dec=dec+(rem*pow(2,i));
        i++;
        n=n/10;
    }
    return dec;
}
int main()
{
    long int n=110111;
   int res= binaryTodecimal(n);
   printf("%d",res);
   return 0;
}