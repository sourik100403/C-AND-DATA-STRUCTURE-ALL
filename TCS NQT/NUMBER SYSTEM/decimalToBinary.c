#include<stdio.h>
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
    int n=10;
    binary(n);

}