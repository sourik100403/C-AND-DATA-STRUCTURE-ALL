#include<stdio.h>
int main(){
    int a=3,b=7;
    // int temp;
    printf(" before a=%d,b=%d",a,b);
    //using third variable
//    temp=a;
//    a=b;
//    b=temp;
   //not using third variable
   a=a+b;
   b=a-b;
   a=a-b;

    printf(" after swap a=%d,b=%d",a,b);
    return 0;
}