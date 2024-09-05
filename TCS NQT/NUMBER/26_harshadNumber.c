#include<stdio.h>
int isHarshad(int n){
    int num=n;
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(num%sum==0){
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n=379;
   int res= isHarshad(n);
   if(res==1)
   printf("yes");
   else
   printf("no");
    return 0;
}