#include<stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else
    return n*fact(n-1);
}
int permutation(int n,int r){
    return fact(n)/fact(n-r);

}
int main()
{
    int n=6,r=4;
    int res=permutation(n,r);
    printf("%d",res);
    return 0;
}