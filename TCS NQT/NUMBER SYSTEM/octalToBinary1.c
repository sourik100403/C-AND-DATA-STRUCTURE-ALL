#include<stdio.h>
#include<math.h>
//octal to decimal
int octalToDecimal(int n){
      int dec=0;
    int i=0;
    while(n!=0){
        int rem=n%10;
        dec=dec+(rem*pow(8,i));
        i++;
        n=n/10;
    }
    return dec;
}

//decimal to binary
int binary(int dec){
  int Binary = 0;
    int i = 0;
    while (dec != 0)
    {
        int rem = dec % 2;
        Binary += (rem * pow(10, i));
        i++;
        dec = dec / 2;
    }
    return Binary;
}
int main()
{
    int octal=55;
    int decimalr=octalToDecimal(octal);
    printf("%d",binary(decimalr));
    return 0;

}