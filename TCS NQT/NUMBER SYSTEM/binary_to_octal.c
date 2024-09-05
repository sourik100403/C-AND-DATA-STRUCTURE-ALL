#include<stdio.h>
#include<math.h>
int binary(long int n){
    int i=0;
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+(d*pow(2,i));
        i++;
        n=n/10;
    }
    return sum;
}
int ocatal(long int n){
    int oct=0;
    int i=1;
    while(n!=0){
        int d=n%1000;
        int val=binary(d);
        oct=oct+val*i;
        i=i*10;
        n=n/1000;
    }
    return oct;
}
int main()
{
    long int n=11111;
    printf("%ld",ocatal(n));

    return 0;
}