#include<stdio.h>
#include<math.h>
int binary(int n){
    int bin[32]={0};
    int i=0;
    while(n){
        bin[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
}
int main()
{
    //decimal 
    int n=100;
    int i=0;
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+(d*pow(8,i));
        i++;
        n=n/10;
    }
    //decimal to octal
   int res= binary(sum);
    
    printf("%d",res);
    return 0;
}