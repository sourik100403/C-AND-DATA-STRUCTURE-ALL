#include<stdio.h>
#include<math.h>
//decimal to binary
int decimalTOctal(int n)
{
    int oct=0;
    int i=0;
    while(n!=0){
        int d=n%8;
        oct=oct+(d*pow(10,i));
        i++;
        n=n/8;

    }
    return oct;

}
int main()
{
    int n=96;
    printf("%d",decimalTOctal(n));
    return 0;
}